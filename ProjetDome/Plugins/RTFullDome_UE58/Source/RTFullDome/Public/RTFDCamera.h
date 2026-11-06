// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DomeSceneCaptureComponent2D.h"
#include "Camera/CameraComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstance.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine.h"
#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "EditorViewportClient.h"
#include "UnrealClient.h"
#endif

#include "RTFDCamera.generated.h"

UENUM(BlueprintType)
enum class ERTFD_CaptureScreenResolution : uint8
{
	XSmall UMETA(DisplayName = "256 × 256"),
	Small UMETA(DisplayName = "512 x 512"),
	Medium UMETA(DisplayName = "1024 x 1024"),
	Large UMETA(DisplayName = "1440 x 1440"),
	XLarge UMETA(DisplayName = "2048 x 2048"),
	XXLarge UMETA(DisplayName = "4096 x 4096")
};

UCLASS()
class RTFULLDOME_API ARTFDCamera : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARTFDCamera();

	//CAMERA SETTING VARIABLES
	
	float FOV;

	//CAMERA SETTINGS
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings", meta = (DisplayName = "Dome Angle", ClampMin = "180.0", ClampMax = "230.0", UIMin = "180.0", UIMax = "230.0"))
	float DomeAngle = 180.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings", meta = (DisplayName = "Screen Blending Angle", ClampMin = "0.0", ClampMax = "10.0", UIMin = "0.0", UIMax = "10.0"))
	float BlendAngle = 8.0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings", meta = (DisplayName = "Should Follow Player"))
	bool bShouldFollowPlayer = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings", meta = (DisplayName = "Pilot Camera In Editor"))
	bool bPilotCameraInEditor = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera Settings", meta = (DisplayName = "Dome Mesh Visible in Editor"))
	bool bDomeProxyMesh = true;
	//OUTPUT SETTINGS
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dome Output", meta = (DisplayName = "Show Dome Master in Viewport"))
	bool bShowInViewport = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dome Output", meta = (DisplayName = "Capture Screen (5) Resolution"))
	ERTFD_CaptureScreenResolution CaptureScreenResolution = ERTFD_CaptureScreenResolution::Medium;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dome Output", meta = (DisplayName = "Output to NDI"))
	bool OutputToNDI = false;
	// The specific user widget needs to be set in blueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dome Output", meta = (DisplayName = "Viewport Widget"))
	TSubclassOf<UUserWidget> ViewportWidget;

	//VARIABLES TEXTURES AND MATERIALS
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Textures")
	UTextureRenderTarget2D* TopTextureRT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Textures")
	UTextureRenderTarget2D* FrontTextureRT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Textures")
	UTextureRenderTarget2D* BackTextureRT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Textures")
	UTextureRenderTarget2D* LeftTextureRT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Textures")
	UTextureRenderTarget2D* RightTextureRT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category="Textures")
	UTextureRenderTarget2D* NDIOutRT;
	UPROPERTY()
	UMaterialInterface* FishEyeMaterial;
	UPROPERTY()
	UMaterialInstanceDynamic* FishEyeMaterialInstance;
	UPROPERTY()
	float CaptureResolution;
	UPROPERTY()
	APawn* PlayerPawn;
	UPROPERTY()
	APlayerController* PlayerController;
	
	FEditorViewportClient* EditorViewportClient;

	//RTFD CAMERA COMPONENTS
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	USceneComponent* CameraRoot;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	USceneComponent* CameraPivot;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Editor)
	UBillboardComponent* BillboardComponent;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	UDomeSceneCaptureComponent2D* TopScreenCapture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	UDomeSceneCaptureComponent2D* FrontScreenCapture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	UDomeSceneCaptureComponent2D* BackScreenCapture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	UDomeSceneCaptureComponent2D* LeftScreenCapture;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Camera)
	UDomeSceneCaptureComponent2D* RightScreenCapture;

	bool bIsInitialized = false;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category="RTFD Utility")
	UMaterialInstanceDynamic* GetDomeDynamicMaterial();
	
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

	virtual void PostInitializeComponents() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void RefreshParams();
	void RefreshCapture();
	void SetupPlayer();
	void ChangeViewTarget();
	void UpdateEditorCamera();

	UFUNCTION(BlueprintCallable, Category="RTFD Utility")
	void UpdateProxyMesh(bool IsVisible) const; 

	virtual bool ShouldTickIfViewportsOnly() const override;

	UFUNCTION(BlueprintCallable, Category="Config")
	void ConfigureRTFDCamera(float DomeAngleIn, bool ShouldFollowPlayerIn, bool PilotCameraInEditorIn,
		bool ShowInViewportIn, ERTFD_CaptureScreenResolution CaptureScreenResolutionIn,bool DomeProxyMeshIn, bool SendToNDIIn);
};


