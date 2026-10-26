// Fill out your copyright notice in the Description page of Project Settings.


#include "DomeSceneCaptureComponent2D.h"
#include "ContentStreaming.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/TextureRenderTarget2D.h"

UDomeSceneCaptureComponent2D::UDomeSceneCaptureComponent2D()
{
	bCaptureEveryFrame = false;
	bCaptureOnMovement = false;
	CaptureSource = ESceneCaptureSource::SCS_FinalColorHDR;
	bUseRayTracingIfEnabled = true;
	bAlwaysPersistRenderingState = true;
	PostProcessSettings.DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
	PostProcessSettings.MotionBlurAmount = 0.;
	PostProcessSettings.VignetteIntensity = 0.;
	PostProcessSettings.bOverride_DynamicGlobalIlluminationMethod = true;
	PostProcessSettings.bOverride_MotionBlurAmount = true;
	PostProcessSettings.bOverride_VignetteIntensity = true;
}

void UDomeSceneCaptureComponent2D::TickComponent(float DeltaTime, enum ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!bCaptureEveryFrame)
	{
		const FVector& ViewOrigin = GetComponentLocation();
		float ScreenWidth = 2048.0;
		if (TextureTarget)
		{
			ScreenWidth = this->TextureTarget->GetSurfaceWidth();
		}
		float FOV = FOVAngle; 
		float BoostFactor = 1.0f;
		bool bOverrideLocation = false;
		float Duration = 0.0f;
		IStreamingManager::Get().AddViewInformation(ViewOrigin, ScreenWidth, FOV, BoostFactor, bOverrideLocation, Duration);
		CaptureScene();
	}
}

