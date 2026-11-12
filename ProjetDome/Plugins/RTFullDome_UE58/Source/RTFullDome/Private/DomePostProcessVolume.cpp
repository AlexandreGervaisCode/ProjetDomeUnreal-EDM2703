// Fill out your copyright notice in the Description page of Project Settings.


#include "DomePostProcessVolume.h"

ADomePostProcessVolume::ADomePostProcessVolume()
{

	// Set the Variables in the Settings Struct
	DomePostProcessSettings.AutoExposureMethod = EAutoExposureMethod::AEM_Manual;
	DomePostProcessSettings.AutoExposureBias = 11.0f;
	DomePostProcessSettings.VignetteIntensity = 0.0f;
	DomePostProcessSettings.BloomIntensity = 0.0f;
	DomePostProcessSettings.bOverride_VignetteIntensity = true;
	DomePostProcessSettings.bOverride_AutoExposureMethod = true;
	DomePostProcessSettings.bOverride_AutoExposureBias = true;
	DomePostProcessSettings.bOverride_BloomIntensity = true;
	bUnbound = true;
	Priority = 10.0;
	// Set the Settings From Parent to Apply
	Settings = DomePostProcessSettings;
	
}
