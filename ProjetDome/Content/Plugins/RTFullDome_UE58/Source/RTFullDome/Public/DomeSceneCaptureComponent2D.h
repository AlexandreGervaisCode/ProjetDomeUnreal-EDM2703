// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneCaptureComponent2D.h"
#include "DomeSceneCaptureComponent2D.generated.h"

/**
 * 
 */
UCLASS()
class RTFULLDOME_API UDomeSceneCaptureComponent2D : public USceneCaptureComponent2D
{
	GENERATED_BODY()

public:
	UDomeSceneCaptureComponent2D();

	void SetFOV(float DomeAngle, float BlendAngle) { FOVAngle = DomeAngle * 0.5 + BlendAngle; };

protected:
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
