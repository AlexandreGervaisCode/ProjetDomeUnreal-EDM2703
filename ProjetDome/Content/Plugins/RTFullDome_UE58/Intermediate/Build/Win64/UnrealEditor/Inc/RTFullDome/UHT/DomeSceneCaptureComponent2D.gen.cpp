// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DomeSceneCaptureComponent2D.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDomeSceneCaptureComponent2D() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RTFullDome(ETypeConstructPhase);
RTFULLDOME_API UClass* Z_Construct_UClass_UDomeSceneCaptureComponent2D(ETypeConstructPhase);
RTFULLDOME_API UClass* Z_Construct_UClass_UDomeSceneCaptureComponent2D(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDomeSceneCaptureComponent2D *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDomeSceneCaptureComponent2D_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "DomeSceneCaptureComponent2D.h" },
		{ "ModuleRelativePath", "Public/DomeSceneCaptureComponent2D.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UDomeSceneCaptureComponent2D constinit property declarations *************
// ********** End Class UDomeSceneCaptureComponent2D constinit property declarations ***************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDomeSceneCaptureComponent2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_USceneCaptureComponent2D,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RTFullDome,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDomeSceneCaptureComponent2D,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDomeSceneCaptureComponent2D;
UClass* Z_Construct_UClass_UDomeSceneCaptureComponent2D(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDomeSceneCaptureComponent2D;
		if (!Z_Registration_Info_UClass_UDomeSceneCaptureComponent2D.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DomeSceneCaptureComponent2D"),
				Z_Registration_Info_UClass_UDomeSceneCaptureComponent2D.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UDomeSceneCaptureComponent2D.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDomeSceneCaptureComponent2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDomeSceneCaptureComponent2D.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDomeSceneCaptureComponent2D.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDomeSceneCaptureComponent2D);
UDomeSceneCaptureComponent2D::~UDomeSceneCaptureComponent2D() {}
// ********** End Class UDomeSceneCaptureComponent2D ***********************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_DomeSceneCaptureComponent2D_h__Script_RTFullDome_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDomeSceneCaptureComponent2D, TEXT("UDomeSceneCaptureComponent2D"), &Z_Registration_Info_UClass_UDomeSceneCaptureComponent2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDomeSceneCaptureComponent2D), 376579447U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_DomeSceneCaptureComponent2D_h__Script_RTFullDome_861e018f3dd4d24c4ca6b84c2fff0c803c53bf52{
	TEXT("/Script/RTFullDome"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
