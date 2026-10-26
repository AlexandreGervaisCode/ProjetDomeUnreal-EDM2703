// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTFDCamera.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeRTFDCamera() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UClass(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APawn(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_APlayerController(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_USceneComponent(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D(ETypeConstructPhase);
UMG_API UClass* Z_Construct_UClass_UUserWidget(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_RTFullDome(ETypeConstructPhase);
RTFULLDOME_API UEnum* Z_Construct_UEnum_RTFullDome_ERTFD_CaptureScreenResolution(ETypeConstructPhase);
RTFULLDOME_API UClass* Z_Construct_UClass_ARTFDCamera(ETypeConstructPhase);
RTFULLDOME_API UClass* Z_Construct_UClass_UDomeSceneCaptureComponent2D(ETypeConstructPhase);
RTFULLDOME_API UClass* Z_Construct_UClass_ARTFDCamera(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ERTFD_CaptureScreenResolution *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_RTFullDome_ERTFD_CaptureScreenResolution_Statics
template<> RTFULLDOME_NON_ATTRIBUTED_API UEnum* StaticEnum<ERTFD_CaptureScreenResolution>()
{
	return Z_Construct_UEnum_RTFullDome_ERTFD_CaptureScreenResolution(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "Large.DisplayName", "1440 x 1440" },
		{ "Large.Name", "ERTFD_CaptureScreenResolution::Large" },
		{ "Medium.DisplayName", "1024 x 1024" },
		{ "Medium.Name", "ERTFD_CaptureScreenResolution::Medium" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
		{ "Small.DisplayName", "512 x 512" },
		{ "Small.Name", "ERTFD_CaptureScreenResolution::Small" },
		{ "XLarge.DisplayName", "2048 x 2048" },
		{ "XLarge.Name", "ERTFD_CaptureScreenResolution::XLarge" },
		{ "XSmall.DisplayName", "256 \xc3\x97 256" },
		{ "XSmall.Name", "ERTFD_CaptureScreenResolution::XSmall" },
		{ "XXLarge.DisplayName", "4096 x 4096" },
		{ "XXLarge.Name", "ERTFD_CaptureScreenResolution::XXLarge" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTFD_CaptureScreenResolution::XSmall", (int64)ERTFD_CaptureScreenResolution::XSmall },
		{ "ERTFD_CaptureScreenResolution::Small", (int64)ERTFD_CaptureScreenResolution::Small },
		{ "ERTFD_CaptureScreenResolution::Medium", (int64)ERTFD_CaptureScreenResolution::Medium },
		{ "ERTFD_CaptureScreenResolution::Large", (int64)ERTFD_CaptureScreenResolution::Large },
		{ "ERTFD_CaptureScreenResolution::XLarge", (int64)ERTFD_CaptureScreenResolution::XLarge },
		{ "ERTFD_CaptureScreenResolution::XXLarge", (int64)ERTFD_CaptureScreenResolution::XXLarge },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RTFullDome,
	nullptr,
	"ERTFD_CaptureScreenResolution",
	"ERTFD_CaptureScreenResolution",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ERTFD_CaptureScreenResolution;
UEnum* Z_Construct_UEnum_RTFullDome_ERTFD_CaptureScreenResolution(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ERTFD_CaptureScreenResolution.OuterSingleton)
		{
			ZRIE_ERTFD_CaptureScreenResolution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTFullDome_ERTFD_CaptureScreenResolution, (UObject*)Z_Construct_UPackage__Script_RTFullDome(ETypeConstructPhase::Outer), TEXT("ERTFD_CaptureScreenResolution"));
		}
		return ZRIE_ERTFD_CaptureScreenResolution.OuterSingleton;
	}
	if (!ZRIE_ERTFD_CaptureScreenResolution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ERTFD_CaptureScreenResolution.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ERTFD_CaptureScreenResolution.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ERTFD_CaptureScreenResolution ***********************************************

// ********** Begin Class ARTFDCamera Function ConfigureRTFDCamera *********************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARTFDCamera_ConfigureRTFDCamera_Statics
struct UHT_STATICS
{
	struct RTFDCamera_eventConfigureRTFDCamera_Parms
	{
		float DomeAngleIn;
		bool ShouldFollowPlayerIn;
		bool PilotCameraInEditorIn;
		bool ShowInViewportIn;
		ERTFD_CaptureScreenResolution CaptureScreenResolutionIn;
		bool DomeProxyMeshIn;
		bool SendToNDIIn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ConfigureRTFDCamera constinit property declarations *******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DomeAngleIn;
	static void NewProp_ShouldFollowPlayerIn_SetBit(void* Obj)
	{
		((RTFDCamera_eventConfigureRTFDCamera_Parms*)Obj)->ShouldFollowPlayerIn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldFollowPlayerIn;
	static void NewProp_PilotCameraInEditorIn_SetBit(void* Obj)
	{
		((RTFDCamera_eventConfigureRTFDCamera_Parms*)Obj)->PilotCameraInEditorIn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PilotCameraInEditorIn;
	static void NewProp_ShowInViewportIn_SetBit(void* Obj)
	{
		((RTFDCamera_eventConfigureRTFDCamera_Parms*)Obj)->ShowInViewportIn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowInViewportIn;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureScreenResolutionIn_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CaptureScreenResolutionIn;
	static void NewProp_DomeProxyMeshIn_SetBit(void* Obj)
	{
		((RTFDCamera_eventConfigureRTFDCamera_Parms*)Obj)->DomeProxyMeshIn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DomeProxyMeshIn;
	static void NewProp_SendToNDIIn_SetBit(void* Obj)
	{
		((RTFDCamera_eventConfigureRTFDCamera_Parms*)Obj)->SendToNDIIn = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SendToNDIIn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ConfigureRTFDCamera constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ConfigureRTFDCamera Property Definitions ******************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DomeAngleIn = { "DomeAngleIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(RTFDCamera_eventConfigureRTFDCamera_Parms, DomeAngleIn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ShouldFollowPlayerIn = { "ShouldFollowPlayerIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RTFDCamera_eventConfigureRTFDCamera_Parms), &UHT_STATICS::NewProp_ShouldFollowPlayerIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_PilotCameraInEditorIn = { "PilotCameraInEditorIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RTFDCamera_eventConfigureRTFDCamera_Parms), &UHT_STATICS::NewProp_PilotCameraInEditorIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_ShowInViewportIn = { "ShowInViewportIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RTFDCamera_eventConfigureRTFDCamera_Parms), &UHT_STATICS::NewProp_ShowInViewportIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CaptureScreenResolutionIn_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CaptureScreenResolutionIn = { "CaptureScreenResolutionIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(RTFDCamera_eventConfigureRTFDCamera_Parms, CaptureScreenResolutionIn), Z_Construct_UEnum_RTFullDome_ERTFD_CaptureScreenResolution, METADATA_PARAMS(0, nullptr) }; // bb86b4b8896187e0280d892970877eb36bc08dbe
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_DomeProxyMeshIn = { "DomeProxyMeshIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RTFDCamera_eventConfigureRTFDCamera_Parms), &UHT_STATICS::NewProp_DomeProxyMeshIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_SendToNDIIn = { "SendToNDIIn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RTFDCamera_eventConfigureRTFDCamera_Parms), &UHT_STATICS::NewProp_SendToNDIIn_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DomeAngleIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShouldFollowPlayerIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PilotCameraInEditorIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ShowInViewportIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CaptureScreenResolutionIn_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CaptureScreenResolutionIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DomeProxyMeshIn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_SendToNDIIn,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function ConfigureRTFDCamera Property Definitions ********************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARTFDCamera, nullptr, "ConfigureRTFDCamera", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RTFDCamera_eventConfigureRTFDCamera_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RTFDCamera_eventConfigureRTFDCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTFDCamera_ConfigureRTFDCamera(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARTFDCamera::execConfigureRTFDCamera)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DomeAngleIn);
	P_GET_UBOOL(Z_Param_ShouldFollowPlayerIn);
	P_GET_UBOOL(Z_Param_PilotCameraInEditorIn);
	P_GET_UBOOL(Z_Param_ShowInViewportIn);
	P_GET_ENUM(ERTFD_CaptureScreenResolution,Z_Param_CaptureScreenResolutionIn);
	P_GET_UBOOL(Z_Param_DomeProxyMeshIn);
	P_GET_UBOOL(Z_Param_SendToNDIIn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfigureRTFDCamera(Z_Param_DomeAngleIn,Z_Param_ShouldFollowPlayerIn,Z_Param_PilotCameraInEditorIn,Z_Param_ShowInViewportIn,ERTFD_CaptureScreenResolution(Z_Param_CaptureScreenResolutionIn),Z_Param_DomeProxyMeshIn,Z_Param_SendToNDIIn);
	P_NATIVE_END;
}
// ********** End Class ARTFDCamera Function ConfigureRTFDCamera ***********************************

// ********** Begin Class ARTFDCamera Function GetDomeDynamicMaterial ******************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARTFDCamera_GetDomeDynamicMaterial_Statics
struct UHT_STATICS
{
	struct RTFDCamera_eventGetDomeDynamicMaterial_Parms
	{
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RTFD Utility" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetDomeDynamicMaterial constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetDomeDynamicMaterial constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetDomeDynamicMaterial Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(RTFDCamera_eventGetDomeDynamicMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function GetDomeDynamicMaterial Property Definitions *****************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARTFDCamera, nullptr, "GetDomeDynamicMaterial", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RTFDCamera_eventGetDomeDynamicMaterial_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RTFDCamera_eventGetDomeDynamicMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTFDCamera_GetDomeDynamicMaterial(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARTFDCamera::execGetDomeDynamicMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetDomeDynamicMaterial();
	P_NATIVE_END;
}
// ********** End Class ARTFDCamera Function GetDomeDynamicMaterial ********************************

// ********** Begin Class ARTFDCamera Function UpdateProxyMesh *************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UFunction_ARTFDCamera_UpdateProxyMesh_Statics
struct UHT_STATICS
{
	struct RTFDCamera_eventUpdateProxyMesh_Parms
	{
		bool IsVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Category", "RTFD Utility" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UpdateProxyMesh constinit property declarations ***********************
	static void NewProp_IsVisible_SetBit(void* Obj)
	{
		((RTFDCamera_eventUpdateProxyMesh_Parms*)Obj)->IsVisible = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UpdateProxyMesh constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UpdateProxyMesh Property Definitions **********************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_IsVisible = { "IsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(RTFDCamera_eventUpdateProxyMesh_Parms), &UHT_STATICS::NewProp_IsVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_IsVisible,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Function UpdateProxyMesh Property Definitions ************************************
const UECodeGen_Private::FFunctionParams UHT_STATICS::FuncParams = { { (FTypeConstructFunc*)Z_Construct_UClass_ARTFDCamera, nullptr, "UpdateProxyMesh", UHT_STATICS::PropPointers, UE_ARRAY_COUNT(UHT_STATICS::PropPointers), DataSizeOf<UHT_STATICS::RTFDCamera_eventUpdateProxyMesh_Parms>(), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)},  };
static_assert(sizeof(UHT_STATICS::RTFDCamera_eventUpdateProxyMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARTFDCamera_UpdateProxyMesh(ETypeConstructPhase Phase)
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, UHT_STATICS::FuncParams);
	}
	return ReturnFunction;
}
#undef UHT_STATICS
DEFINE_FUNCTION(ARTFDCamera::execUpdateProxyMesh)
{
	P_GET_UBOOL(Z_Param_IsVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateProxyMesh(Z_Param_IsVisible);
	P_NATIVE_END;
}
// ********** End Class ARTFDCamera Function UpdateProxyMesh ***************************************

// ********** Begin Class ARTFDCamera **************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_ARTFDCamera_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "RTFDCamera.h" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DomeAngle_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ClampMax", "230.0" },
		{ "ClampMin", "180.0" },
		{ "Comment", "//CAMERA SETTINGS\n" },
		{ "DisplayName", "Dome Angle" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
		{ "ToolTip", "CAMERA SETTINGS" },
		{ "UIMax", "230.0" },
		{ "UIMin", "180.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendAngle_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "DisplayName", "Screen Blending Angle" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFollowPlayer_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "DisplayName", "Should Follow Player" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPilotCameraInEditor_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "DisplayName", "Pilot Camera In Editor" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDomeProxyMesh_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "DisplayName", "Dome Mesh Visible in Editor" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowInViewport_MetaData[] = {
		{ "Category", "Dome Output" },
		{ "Comment", "//OUTPUT SETTINGS\n" },
		{ "DisplayName", "Show Dome Master in Viewport" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
		{ "ToolTip", "OUTPUT SETTINGS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureScreenResolution_MetaData[] = {
		{ "Category", "Dome Output" },
		{ "DisplayName", "Capture Screen (5) Resolution" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputToNDI_MetaData[] = {
		{ "Category", "Dome Output" },
		{ "DisplayName", "Output to NDI" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportWidget_MetaData[] = {
		{ "Category", "Dome Output" },
		{ "Comment", "// The specific user widget needs to be set in blueprint\n" },
		{ "DisplayName", "Viewport Widget" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
		{ "ToolTip", "The specific user widget needs to be set in blueprint" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopTextureRT_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "//VARIABLES TEXTURES AND MATERIALS\n" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
		{ "ToolTip", "VARIABLES TEXTURES AND MATERIALS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontTextureRT_MetaData[] = {
		{ "Category", "Textures" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackTextureRT_MetaData[] = {
		{ "Category", "Textures" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftTextureRT_MetaData[] = {
		{ "Category", "Textures" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightTextureRT_MetaData[] = {
		{ "Category", "Textures" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NDIOutRT_MetaData[] = {
		{ "Category", "Textures" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FishEyeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FishEyeMaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRoot_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "//RTFD CAMERA COMPONENTS\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
		{ "ToolTip", "RTFD CAMERA COMPONENTS" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraPivot_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BillboardComponent_MetaData[] = {
		{ "Category", "Editor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopScreenCapture_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontScreenCapture_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackScreenCapture_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftScreenCapture_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightScreenCapture_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RTFDCamera.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARTFDCamera constinit property declarations ******************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DomeAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendAngle;
	static void NewProp_bShouldFollowPlayer_SetBit(void* Obj)
	{
		((ARTFDCamera*)Obj)->bShouldFollowPlayer = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFollowPlayer;
	static void NewProp_bPilotCameraInEditor_SetBit(void* Obj)
	{
		((ARTFDCamera*)Obj)->bPilotCameraInEditor = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPilotCameraInEditor;
	static void NewProp_bDomeProxyMesh_SetBit(void* Obj)
	{
		((ARTFDCamera*)Obj)->bDomeProxyMesh = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDomeProxyMesh;
	static void NewProp_bShowInViewport_SetBit(void* Obj)
	{
		((ARTFDCamera*)Obj)->bShowInViewport = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowInViewport;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureScreenResolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CaptureScreenResolution;
	static void NewProp_OutputToNDI_SetBit(void* Obj)
	{
		((ARTFDCamera*)Obj)->OutputToNDI = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutputToNDI;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ViewportWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopTextureRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontTextureRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackTextureRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftTextureRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightTextureRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NDIOutRT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FishEyeMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FishEyeMaterialInstance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CaptureResolution;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraPivot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BillboardComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopScreenCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontScreenCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackScreenCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftScreenCapture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightScreenCapture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARTFDCamera constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ConfigureRTFDCamera"), .Pointer = &ARTFDCamera::execConfigureRTFDCamera },
		{ .NameUTF8 = UTF8TEXT("GetDomeDynamicMaterial"), .Pointer = &ARTFDCamera::execGetDomeDynamicMaterial },
		{ .NameUTF8 = UTF8TEXT("UpdateProxyMesh"), .Pointer = &ARTFDCamera::execUpdateProxyMesh },
	};
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARTFDCamera_ConfigureRTFDCamera, "ConfigureRTFDCamera" }, // bfdbca5143d2c83ce0fc74f74ecad6efefc649fd
		{ &Z_Construct_UFunction_ARTFDCamera_GetDomeDynamicMaterial, "GetDomeDynamicMaterial" }, // c803313cdf0b1e76b1c680fb0466aba2e99f9227
		{ &Z_Construct_UFunction_ARTFDCamera_UpdateProxyMesh, "UpdateProxyMesh" }, // 6d69591e2e2ce94040b1b7f7d8cfa5b9c75e6f77
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTFDCamera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class ARTFDCamera Property Definitions *****************************************
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_DomeAngle = { "DomeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, DomeAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DomeAngle_MetaData), NewProp_DomeAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_BlendAngle = { "BlendAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, BlendAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendAngle_MetaData), NewProp_BlendAngle_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShouldFollowPlayer = { "bShouldFollowPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTFDCamera), &UHT_STATICS::NewProp_bShouldFollowPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldFollowPlayer_MetaData), NewProp_bShouldFollowPlayer_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bPilotCameraInEditor = { "bPilotCameraInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTFDCamera), &UHT_STATICS::NewProp_bPilotCameraInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPilotCameraInEditor_MetaData), NewProp_bPilotCameraInEditor_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bDomeProxyMesh = { "bDomeProxyMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTFDCamera), &UHT_STATICS::NewProp_bDomeProxyMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDomeProxyMesh_MetaData), NewProp_bDomeProxyMesh_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bShowInViewport = { "bShowInViewport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTFDCamera), &UHT_STATICS::NewProp_bShowInViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowInViewport_MetaData), NewProp_bShowInViewport_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_CaptureScreenResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_CaptureScreenResolution = { "CaptureScreenResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, CaptureScreenResolution), Z_Construct_UEnum_RTFullDome_ERTFD_CaptureScreenResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureScreenResolution_MetaData), NewProp_CaptureScreenResolution_MetaData) }; // bb86b4b8896187e0280d892970877eb36bc08dbe
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_OutputToNDI = { "OutputToNDI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(ARTFDCamera), &UHT_STATICS::NewProp_OutputToNDI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputToNDI_MetaData), NewProp_OutputToNDI_MetaData) };
const UECodeGen_Private::FClassPropertyParams UHT_STATICS::NewProp_ViewportWidget = { "ViewportWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, ViewportWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportWidget_MetaData), NewProp_ViewportWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TopTextureRT = { "TopTextureRT", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, TopTextureRT), Z_Construct_UClass_UTextureRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopTextureRT_MetaData), NewProp_TopTextureRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FrontTextureRT = { "FrontTextureRT", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, FrontTextureRT), Z_Construct_UClass_UTextureRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontTextureRT_MetaData), NewProp_FrontTextureRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BackTextureRT = { "BackTextureRT", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, BackTextureRT), Z_Construct_UClass_UTextureRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackTextureRT_MetaData), NewProp_BackTextureRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftTextureRT = { "LeftTextureRT", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, LeftTextureRT), Z_Construct_UClass_UTextureRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftTextureRT_MetaData), NewProp_LeftTextureRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightTextureRT = { "RightTextureRT", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, RightTextureRT), Z_Construct_UClass_UTextureRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightTextureRT_MetaData), NewProp_RightTextureRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_NDIOutRT = { "NDIOutRT", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, NDIOutRT), Z_Construct_UClass_UTextureRenderTarget2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NDIOutRT_MetaData), NewProp_NDIOutRT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FishEyeMaterial = { "FishEyeMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, FishEyeMaterial), Z_Construct_UClass_UMaterialInterface, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FishEyeMaterial_MetaData), NewProp_FishEyeMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FishEyeMaterialInstance = { "FishEyeMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, FishEyeMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FishEyeMaterialInstance_MetaData), NewProp_FishEyeMaterialInstance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams UHT_STATICS::NewProp_CaptureResolution = { "CaptureResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, CaptureResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureResolution_MetaData), NewProp_CaptureResolution_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, PlayerPawn), Z_Construct_UClass_APawn, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerPawn_MetaData), NewProp_PlayerPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, PlayerController), Z_Construct_UClass_APlayerController, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CameraRoot = { "CameraRoot", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, CameraRoot), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRoot_MetaData), NewProp_CameraRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_CameraPivot = { "CameraPivot", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, CameraPivot), Z_Construct_UClass_USceneComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraPivot_MetaData), NewProp_CameraPivot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BillboardComponent = { "BillboardComponent", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, BillboardComponent), Z_Construct_UClass_UBillboardComponent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BillboardComponent_MetaData), NewProp_BillboardComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_TopScreenCapture = { "TopScreenCapture", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, TopScreenCapture), Z_Construct_UClass_UDomeSceneCaptureComponent2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopScreenCapture_MetaData), NewProp_TopScreenCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_FrontScreenCapture = { "FrontScreenCapture", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, FrontScreenCapture), Z_Construct_UClass_UDomeSceneCaptureComponent2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontScreenCapture_MetaData), NewProp_FrontScreenCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_BackScreenCapture = { "BackScreenCapture", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, BackScreenCapture), Z_Construct_UClass_UDomeSceneCaptureComponent2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackScreenCapture_MetaData), NewProp_BackScreenCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_LeftScreenCapture = { "LeftScreenCapture", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, LeftScreenCapture), Z_Construct_UClass_UDomeSceneCaptureComponent2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftScreenCapture_MetaData), NewProp_LeftScreenCapture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_RightScreenCapture = { "RightScreenCapture", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(ARTFDCamera, RightScreenCapture), Z_Construct_UClass_UDomeSceneCaptureComponent2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightScreenCapture_MetaData), NewProp_RightScreenCapture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DomeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BlendAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShouldFollowPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bPilotCameraInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bDomeProxyMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bShowInViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CaptureScreenResolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CaptureScreenResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_OutputToNDI,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ViewportWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TopTextureRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrontTextureRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackTextureRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftTextureRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightTextureRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_NDIOutRT,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FishEyeMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FishEyeMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CaptureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_CameraPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BillboardComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_TopScreenCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_FrontScreenCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_BackScreenCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LeftScreenCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_RightScreenCapture,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class ARTFDCamera Property Definitions *******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_AActor,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_RTFullDome,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_ARTFDCamera,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static void ARTFDCamera_StaticRegisterNativesARTFDCamera()
{
	UClass* Class = ARTFDCamera::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, 		MakeConstArrayView(UHT_STATICS::Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ARTFDCamera;
UClass* Z_Construct_UClass_ARTFDCamera(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = ARTFDCamera;
		if (!Z_Registration_Info_UClass_ARTFDCamera.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("RTFDCamera"),
				Z_Registration_Info_UClass_ARTFDCamera.InnerSingleton,
				ARTFDCamera_StaticRegisterNativesARTFDCamera,
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
		return Z_Registration_Info_UClass_ARTFDCamera.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_ARTFDCamera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTFDCamera.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_ARTFDCamera.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARTFDCamera);
ARTFDCamera::~ARTFDCamera() {}
// ********** End Class ARTFDCamera ****************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h__Script_RTFullDome_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_RTFullDome_ERTFD_CaptureScreenResolution, TEXT("ERTFD_CaptureScreenResolution"), &ZRIE_ERTFD_CaptureScreenResolution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3146167480U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARTFDCamera, TEXT("ARTFDCamera"), &Z_Registration_Info_UClass_ARTFDCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTFDCamera), 752739338U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marca_Documents_Unreal_Plugins_RTFD_UE58_RTFullDome_HostProject_Plugins_RTFullDome_Source_RTFullDome_Public_RTFDCamera_h__Script_RTFullDome_3ba60d364dbe19360631a9e97b8c1957335be83b{
	TEXT("/Script/RTFullDome"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
