// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTFullDome_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RTFullDome;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RTFullDome(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_RTFullDome.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/RTFullDome",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000040,
			0xF536D5A6,
			0x01BCCCF5,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RTFullDome.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_RTFullDome.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RTFullDome(Z_Construct_UPackage__Script_RTFullDome, TEXT("/Script/RTFullDome"), Z_Registration_Info_UPackage__Script_RTFullDome, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF536D5A6, 0x01BCCCF5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
