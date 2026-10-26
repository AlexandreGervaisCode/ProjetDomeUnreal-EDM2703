// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/PostProcessVolume.h"
#include "DomePostProcessVolume.generated.h"

/**
 * 
 */
UCLASS()
class RTFULLDOME_API ADomePostProcessVolume : public APostProcessVolume
{
	GENERATED_BODY()

public:
	ADomePostProcessVolume();

	//Post Process Setting Variable
	FPostProcessSettings DomePostProcessSettings;
	
};
