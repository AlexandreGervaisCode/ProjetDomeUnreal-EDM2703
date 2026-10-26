// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RTFDCamera.h"

#ifdef RTFULLDOME_RTFDCamera_generated_h
#error "RTFDCamera.generated.h already included, missing '#pragma once' in RTFDCamera.h"
#endif
#define RTFULLDOME_RTFDCamera_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMaterialInstanceDynamic;
enum class ERTFD_CaptureScreenResolution : uint8;

// ********** Begin Class ARTFDCamera **************************************************************
#define FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execConfigureRTFDCamera); \
	DECLARE_FUNCTION(execUpdateProxyMesh); \
	DECLARE_FUNCTION(execGetDomeDynamicMaterial);


struct Z_Construct_UClass_ARTFDCamera_Statics;
RTFULLDOME_API UClass* Z_Construct_UClass_ARTFDCamera(ETypeConstructPhase);

#define FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h_37_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ARTFDCamera_Statics; \
	friend RTFULLDOME_API UClass* ::Z_Construct_UClass_ARTFDCamera(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ARTFDCamera, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTFullDome"), Z_Construct_UClass_ARTFDCamera) \
	DECLARE_SERIALIZER(ARTFDCamera)


#define FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h_37_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARTFDCamera(ARTFDCamera&&) = delete; \
	ARTFDCamera(const ARTFDCamera&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARTFDCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARTFDCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARTFDCamera) \
	NO_API virtual ~ARTFDCamera();


#define FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h_34_PROLOG
#define FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h_37_INCLASS_NO_PURE_DECLS \
	FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARTFDCamera;

// ********** End Class ARTFDCamera ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h

// ********** Begin Enum ERTFD_CaptureScreenResolution *********************************************
#define FOREACH_ENUM_ERTFD_CAPTURESCREENRESOLUTION(op) \
	op(ERTFD_CaptureScreenResolution::XSmall) \
	op(ERTFD_CaptureScreenResolution::Small) \
	op(ERTFD_CaptureScreenResolution::Medium) \
	op(ERTFD_CaptureScreenResolution::Large) \
	op(ERTFD_CaptureScreenResolution::XLarge) \
	op(ERTFD_CaptureScreenResolution::XXLarge) 

enum class ERTFD_CaptureScreenResolution : uint8;
template<> struct TIsUEnumClass<ERTFD_CaptureScreenResolution> { enum { Value = true }; };
template<> UE_NODEBUG RTFULLDOME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERTFD_CaptureScreenResolution>();
// ********** End Enum ERTFD_CaptureScreenResolution ***********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
