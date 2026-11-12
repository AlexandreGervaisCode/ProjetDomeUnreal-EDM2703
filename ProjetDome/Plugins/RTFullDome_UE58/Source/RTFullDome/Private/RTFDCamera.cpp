// Fill out your copyright notice in the Description page of Project Settings.


#include "RTFDCamera.h"
#include "Blueprint/UserWidget.h"
#include "CameraController.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Interfaces/IPluginManager.h"

namespace RTFD_Utils
{
	static UTextureRenderTarget2D* GetOrCreateRenderTarget(ARTFDCamera* Owner, UTextureRenderTarget2D* ExistingTarget, const int32 Resolution, const ETextureRenderTargetFormat Format, const bool bForceLinearGamma)
	{
		//CHECK IF OWNER IS VALID
		if (!Owner)
		{
			return nullptr;
		}
		//INITIALIZE THE RETURN RENDER TARGET
		UTextureRenderTarget2D* RenderTarget =
			IsValid(ExistingTarget) && ExistingTarget->GetOuter() == Owner
				? ExistingTarget
				: NewObject<UTextureRenderTarget2D>(Owner, NAME_None, RF_Transient);
		//IF RENDER TARGET STILL INVALID RETURN
		if (!RenderTarget)
		{
			return nullptr;
		}
		//CHECK IF THE CURRENT RENDER TARGET PARAMS ARE DIFFERENT
		const bool bUpdateParams =
			RenderTarget->SizeX != Resolution ||
			RenderTarget->SizeY != Resolution ||
			RenderTarget->RenderTargetFormat != Format ||
			RenderTarget->bForceLinearGamma != bForceLinearGamma;
		//IF YES CHANGE THE PARAMS
		if (bUpdateParams)
		{
			RenderTarget->RenderTargetFormat = Format;
			RenderTarget->ClearColor = FLinearColor::Black;
			RenderTarget->bAutoGenerateMips = false;
			RenderTarget->bForceLinearGamma = bForceLinearGamma;
			RenderTarget->InitAutoFormat(Resolution, Resolution);
			RenderTarget->UpdateResourceImmediate(true);
		}
		return RenderTarget;
	}

	static void ConfigureCaptureComponent(UDomeSceneCaptureComponent2D* DomeSceneCapture, UTextureRenderTarget2D* RenderTarget)
	{
		// RETURN IF CAPTURE IS INVALID
		if (!DomeSceneCapture)
		{
			return;
		}
		DomeSceneCapture->TextureTarget = RenderTarget;
		DomeSceneCapture->HiddenActors.AddUnique(DomeSceneCapture->GetOwner());
		DomeSceneCapture->MarkRenderStateDirty();
	}
}

// Sets default values
ARTFDCamera::ARTFDCamera()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	
	//SETUP COMPONENTS
	CameraRoot = CreateDefaultSubobject<USceneComponent>("CameraRoot");
	SetRootComponent(CameraRoot);
	CameraPivot = CreateDefaultSubobject<USceneComponent>("CameraPivot");
	CameraPivot->SetupAttachment(CameraRoot);

	//SETUP BILLBOARD COMPONENT
#if WITH_ENGINE
	BillboardComponent = CreateDefaultSubobject<UBillboardComponent>("BillboardComponent");
	BillboardComponent->SetupAttachment(CameraRoot);
	BillboardComponent->SetHiddenInGame(true);
	static ConstructorHelpers::FObjectFinder<UTexture2D> DomeIconAsset(TEXT("/RTFullDome/Textures/DomeBIllboard.DomeBIllboard"));
	BillboardComponent->SetSprite(DomeIconAsset.Object);
#endif

	// SETUP CONFIG OF EACH CAPTURE COMPONENTS
	TopScreenCapture = CreateDefaultSubobject<UDomeSceneCaptureComponent2D>("TopScreenCapture");
	TopScreenCapture->SetupAttachment(CameraPivot);
	TopScreenCapture->SetFOV(DomeAngle, BlendAngle);
	TopScreenCapture->SetRelativeRotation(FRotator(90, 0, 0));
	TopScreenCapture->SetRelativeScale3D(FVector(0, 0, 0));
	FrontScreenCapture = CreateDefaultSubobject<UDomeSceneCaptureComponent2D>("FrontScreenCapture");
	FrontScreenCapture->SetupAttachment(CameraPivot);
	FrontScreenCapture->SetFOV(DomeAngle, BlendAngle);
	FrontScreenCapture->SetRelativeRotation(FRotator(0, 180, 179.999));
	FrontScreenCapture->SetRelativeScale3D(FVector(0, 0, 0));
	BackScreenCapture = CreateDefaultSubobject<UDomeSceneCaptureComponent2D>("BackScreenCapture");
	BackScreenCapture->SetupAttachment(CameraPivot);
	BackScreenCapture->SetFOV(DomeAngle, BlendAngle);
	BackScreenCapture->SetRelativeRotation(FRotator(0, 0, 0));
	BackScreenCapture->SetRelativeScale3D(FVector(0, 0, 0));
	LeftScreenCapture = CreateDefaultSubobject<UDomeSceneCaptureComponent2D>("LeftScreenCapture");
	LeftScreenCapture->SetupAttachment(CameraPivot);
	LeftScreenCapture->SetFOV(DomeAngle, BlendAngle);
	LeftScreenCapture->SetRelativeRotation(FRotator(0, -90, -90));
	LeftScreenCapture->SetRelativeScale3D(FVector(0, 0, 0));
	RightScreenCapture = CreateDefaultSubobject<UDomeSceneCaptureComponent2D>("RightScreenCapture");
	RightScreenCapture->SetupAttachment(CameraPivot);
	RightScreenCapture->SetFOV(DomeAngle, BlendAngle);
	RightScreenCapture->SetRelativeRotation(FRotator(0, 90, 90));
	RightScreenCapture->SetRelativeScale3D(FVector(0, 0, 0));

	TopTextureRT = nullptr;
	FrontTextureRT = nullptr;
	BackTextureRT = nullptr;
	LeftTextureRT = nullptr;
	RightTextureRT = nullptr;
	
	//SETUP NDI RENTER TARGET REFERENCE
	static ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> NDIRenderTargetAsset(TEXT("/RTFullDome/Textures/RT_NDIOut.RT_NDIOut"));
	NDIOutRT = NDIRenderTargetAsset.Object;
	
	bIsInitialized = true;
}

// Called when the game starts or when spawned
void ARTFDCamera::BeginPlay()
{
	Super::BeginPlay();

	//SETUP PAWN + CONTROLLER
	SetupPlayer();

	if (PlayerPawn)
	{
		PlayerPawn->SetHidden(true);
	}

	//CHANGE VIEW TARGET IS SHOWN IN VIEWPORT
	if (bShowInViewport || OutputToNDI)
	{
		//ChangeViewTarget();
		
		//CREATING A WIDGET ON BEGIN PLAY
		if (ViewportWidget)
		{
			// Create widget
			UUserWidget* AddedViewportWidget = CreateWidget<UUserWidget>(GetWorld(), ViewportWidget);
			if (bShowInViewport)
			{
				AddedViewportWidget->AddToViewport();
			}
			
			if (UFunction* SetMaterialFunction = AddedViewportWidget->FindFunction(TEXT("SetDomeMaterial")))
			{
				FishEyeMaterialInstance->SetScalarParameterValue("DomeAngle", DomeAngle);
				FishEyeMaterialInstance->SetTextureParameterValue("Top", TopTextureRT);
				FishEyeMaterialInstance->SetTextureParameterValue("Front", BackTextureRT);
				FishEyeMaterialInstance->SetTextureParameterValue("Back", FrontTextureRT);
				FishEyeMaterialInstance->SetTextureParameterValue("Left", RightTextureRT);
				FishEyeMaterialInstance->SetTextureParameterValue("Right", LeftTextureRT);
				AddedViewportWidget->ProcessEvent(SetMaterialFunction, &FishEyeMaterialInstance);
			}
			
		}
		
	}
	
}

// Called every frame
void ARTFDCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
		if (PlayerPawn && bShouldFollowPlayer && PlayerController)
		{
			SetActorLocation(PlayerPawn->GetActorLocation());
			SetActorRotation(PlayerController->GetControlRotation());
		}
	if (bIsInitialized)
	{
		RefreshCapture();
	}

	if (OutputToNDI)
	{
		UKismetRenderingLibrary::DrawMaterialToRenderTarget(GetWorld(), NDIOutRT, FishEyeMaterialInstance);
	}
	
}

void ARTFDCamera::RefreshParams()
{
	if (bIsInitialized)
	{
		//UPDATE CAPTURE FOV
		if (TopScreenCapture) {TopScreenCapture->SetFOV(DomeAngle, BlendAngle);}
		if (FrontScreenCapture) {FrontScreenCapture->SetFOV(DomeAngle, BlendAngle);}
		if (BackScreenCapture) {BackScreenCapture->SetFOV(DomeAngle, BlendAngle);}
		if (LeftScreenCapture) {LeftScreenCapture->SetFOV(DomeAngle, BlendAngle);}
		if (RightScreenCapture) {RightScreenCapture->SetFOV(DomeAngle, BlendAngle);}

		if (FishEyeMaterialInstance && TopScreenCapture && FrontScreenCapture && BackScreenCapture && LeftScreenCapture && RightScreenCapture)
		{
			FishEyeMaterialInstance->SetScalarParameterValue("DomeAngle", DomeAngle);
			FishEyeMaterialInstance->SetTextureParameterValue("Top", TopTextureRT);
			FishEyeMaterialInstance->SetTextureParameterValue("Front", BackTextureRT);
			FishEyeMaterialInstance->SetTextureParameterValue("Back", FrontTextureRT);
			FishEyeMaterialInstance->SetTextureParameterValue("Left", RightTextureRT);
			FishEyeMaterialInstance->SetTextureParameterValue("Right", LeftTextureRT);
		}
		
		UpdateProxyMesh(bDomeProxyMesh);
		//ShouldTickIfViewportsOnly();
	}
	
}

void ARTFDCamera::RefreshCapture()
{
	switch (CaptureScreenResolution)
	{
	case ERTFD_CaptureScreenResolution::XSmall:
		CaptureResolution = 256.0;
		break;
	case ERTFD_CaptureScreenResolution::Small:
		CaptureResolution = 512.0;
		break;
	case ERTFD_CaptureScreenResolution::Medium:
		CaptureResolution = 1024.0;
		break;
	case ERTFD_CaptureScreenResolution::Large:
		CaptureResolution = 1440.0;
		break;
	case ERTFD_CaptureScreenResolution::XLarge:
		CaptureResolution = 2048.0;
		break;
	case ERTFD_CaptureScreenResolution::XXLarge:
		CaptureResolution = 4096.0;
		break;
	}
	//SETUP THE RENDER TARGET AT RUN TIME
	TopTextureRT = RTFD_Utils::GetOrCreateRenderTarget(this, TopTextureRT, CaptureResolution, ETextureRenderTargetFormat::RTF_RGBA16f, true);
	FrontTextureRT = RTFD_Utils::GetOrCreateRenderTarget(this, FrontTextureRT, CaptureResolution, ETextureRenderTargetFormat::RTF_RGBA16f, true);
	BackTextureRT = RTFD_Utils::GetOrCreateRenderTarget(this, BackTextureRT, CaptureResolution, ETextureRenderTargetFormat::RTF_RGBA16f, true);
	LeftTextureRT = RTFD_Utils::GetOrCreateRenderTarget(this, LeftTextureRT, CaptureResolution, ETextureRenderTargetFormat::RTF_RGBA16f, true);
	RightTextureRT = RTFD_Utils::GetOrCreateRenderTarget(this, RightTextureRT, CaptureResolution, ETextureRenderTargetFormat::RTF_RGBA16f, true);

	//ADD THE RENDER TARGETS TO THE SCENE CAPTURE
	RTFD_Utils::ConfigureCaptureComponent(TopScreenCapture, TopTextureRT);
	RTFD_Utils::ConfigureCaptureComponent(FrontScreenCapture, FrontTextureRT);
	RTFD_Utils::ConfigureCaptureComponent(BackScreenCapture, BackTextureRT);
	RTFD_Utils::ConfigureCaptureComponent(LeftScreenCapture, RightTextureRT);
	RTFD_Utils::ConfigureCaptureComponent(RightScreenCapture, LeftTextureRT);
	
	//SETUP THE FISH EYE MATERIAL IF IT DOES NOT EXIST
	if (!FishEyeMaterial)
	{
		FishEyeMaterial = LoadObject<UMaterialInterface>(nullptr, TEXT("/RTFullDome/Materials/M_DomeFishEye.M_DomeFishEye"));
	}
	if (FishEyeMaterial)
	{
		FishEyeMaterialInstance = UMaterialInstanceDynamic::Create(FishEyeMaterial, nullptr);
		FishEyeMaterialInstance->SetScalarParameterValue("DomeAngle", DomeAngle);
		FishEyeMaterialInstance->SetTextureParameterValue("Top", TopTextureRT);
		FishEyeMaterialInstance->SetTextureParameterValue("Front", BackTextureRT);
		FishEyeMaterialInstance->SetTextureParameterValue("Back", FrontTextureRT);
		FishEyeMaterialInstance->SetTextureParameterValue("Left", RightTextureRT);
		FishEyeMaterialInstance->SetTextureParameterValue("Right", LeftTextureRT);
	}
	
	//UPDATE POSISION FROM VIEWPORT CAMERA "PILOT"
	UpdateEditorCamera();
	
	//REFRESH THE FOV + OTHER PARAMS
	RefreshParams();
}

void ARTFDCamera::SetupPlayer()
{
	PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController)
	{
		PlayerPawn = PlayerController->GetPawn();
	}
}

void ARTFDCamera::ChangeViewTarget()
{
	if (PlayerController)
	{
		PlayerController->SetViewTarget(this);
	}
}

void ARTFDCamera::UpdateEditorCamera()
{
#if WITH_EDITOR
	if (bPilotCameraInEditor)
	{
		EditorViewportClient = static_cast<FEditorViewportClient*>(GEditor->GetActiveViewport()->GetClient());
		
		if (EditorViewportClient != nullptr)
		{
			FVector CameraPosition = EditorViewportClient->GetViewLocation();
			FRotator CameraRotation = EditorViewportClient->GetViewRotation();
			SetActorLocation(CameraPosition);
			SetActorRotation(CameraRotation);
		}
	}
#endif
}

void ARTFDCamera::UpdateProxyMesh(bool IsVisible) const
{
	BillboardComponent->SetVisibility(IsVisible);
}

bool ARTFDCamera::ShouldTickIfViewportsOnly() const
{
		return true;
}

void ARTFDCamera::ConfigureRTFDCamera(float DomeAngleIn, bool ShouldFollowPlayerIn, bool PilotCameraInEditorIn,
		bool ShowInViewportIn, ERTFD_CaptureScreenResolution CaptureScreenResolutionIn, bool DomeProxyMeshIn, bool SendToNDIIn)
{
	DomeAngle = DomeAngleIn;
	bShouldFollowPlayer = ShouldFollowPlayerIn;
	bPilotCameraInEditor = PilotCameraInEditorIn;
	bShowInViewport = ShowInViewportIn;
	CaptureScreenResolution = CaptureScreenResolutionIn;
	bDomeProxyMesh = DomeProxyMeshIn;
	OutputToNDI = SendToNDIIn;
	RefreshCapture();
}

UMaterialInstanceDynamic* ARTFDCamera::GetDomeDynamicMaterial()
{
	return (FishEyeMaterialInstance);
}


#if WITH_EDITOR
void ARTFDCamera::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	RefreshCapture();
	
}
#endif

void ARTFDCamera::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	
}

void ARTFDCamera::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	//if(EndPlayReason == EEndPlayReason::Quit)
	//{
	//	Destroy();
	//}
}
