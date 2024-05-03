// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_LiquidShader/Public/LiquidShaderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiquidShaderComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_UTC_LiquidShader();
UTC_LIQUIDSHADER_API UClass* Z_Construct_UClass_ULiquidShaderComponent();
UTC_LIQUIDSHADER_API UClass* Z_Construct_UClass_ULiquidShaderComponent_NoRegister();
UTC_LIQUIDSHADER_API UClass* Z_Construct_UClass_UUTC_LSInterface_NoRegister();
// End Cross Module References

// Begin Class ULiquidShaderComponent
void ULiquidShaderComponent::StaticRegisterNativesULiquidShaderComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiquidShaderComponent);
UClass* Z_Construct_UClass_ULiquidShaderComponent_NoRegister()
{
	return ULiquidShaderComponent::StaticClass();
}
struct Z_Construct_UClass_ULiquidShaderComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LiquidShaderComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiquidMaterialInstance_MetaData[] = {
		{ "Category", "LiquidSettings|Global" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The liquid material instance*/" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The liquid material instance" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeMaterials_MetaData[] = {
		{ "Category", "LiquidSettings|Global" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** All materials that are not liquid shader but are used to close the cap and adapt the liquid offset */" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All materials that are not liquid shader but are used to close the cap and adapt the liquid offset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LS_StaticMeshComponent_MetaData[] = {
		{ "Category", "LiquidSettings|Global|Blueprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Only for liquid shader in a BP, set the static mesh component which display the liquid shader */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Only for liquid shader in a BP, set the static mesh component which display the liquid shader" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavesIntensity_MetaData[] = {
		{ "Category", "LiquidSettings|Waves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The waves' intensity*/" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The waves' intensity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavesRotationSensitivity_MetaData[] = {
		{ "Category", "LiquidSettings|Waves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How the Rotation strength affects waves*/" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the Rotation strength affects waves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavesOffsetSensitivity_MetaData[] = {
		{ "Category", "LiquidSettings|Waves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How the Offset strength affects waves*/" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the Offset strength affects waves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Viscosity_MetaData[] = {
		{ "Category", "LiquidSettings|Waves" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The liquid viscosity*/" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The liquid viscosity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavesRenderTargetMaterial_MetaData[] = {
		{ "Category", "LiquidSettings|Waves|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Material which drives waves Render Target*/" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material which drives waves Render Target" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WavesRenderTargetTexture_MetaData[] = {
		{ "Category", "LiquidSettings|Waves|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Render Target which drives waves*/" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render Target which drives waves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShowVoxel_MetaData[] = {
		{ "Category", "LiquidSettings|Liquid Adaptation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Debug voxelized volume  */" },
#endif
		{ "EditCondition", "LiquidAdaptation" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Debug voxelized volume" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoxelFactor_MetaData[] = {
		{ "Category", "LiquidSettings|Liquid Adaptation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The voxel's factor, set the voxel's size relative to object bound size*/" },
#endif
		{ "EditCondition", "LiquidAdaptation" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The voxel's factor, set the voxel's size relative to object bound size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdaptationSpeedScale_MetaData[] = {
		{ "Category", "LiquidSettings|Liquid Adaptation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Higher value hides the liquid's adaptation and removes compression effect for fast rotation but could create stuttering for slow rotation */" },
#endif
		{ "EditCondition", "LiquidAdaptation" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher value hides the liquid's adaptation and removes compression effect for fast rotation but could create stuttering for slow rotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDF_CapDistanceMaskMaterial_MetaData[] = {
		{ "Category", "LiquidSettings|Cap|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mask material to feed the jump flood material*/" },
#endif
		{ "EditCondition", "GenerateCap" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mask material to feed the jump flood material" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDF_CapJumpFloodMaterial_MetaData[] = {
		{ "Category", "LiquidSettings|Cap|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump flood material to create SDF texture */" },
#endif
		{ "EditCondition", "GenerateCap" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump flood material to create SDF texture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapRenderTargetTexture_MetaData[] = {
		{ "Category", "LiquidSettings|Cap|Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Render Target to draw the cap form*/" },
#endif
		{ "EditCondition", "GenerateCap" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Render Target to draw the cap form" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerateCap_MetaData[] = {
		{ "Category", "LiquidSettings|Optimization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Enable the compute shader to create the liquid cap (Liquid surface)*/" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable the compute shader to create the liquid cap (Liquid surface)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CleanUpCap_MetaData[] = {
		{ "Category", "LiquidSettings|Optimization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add a clean up pass to the cap render target to remove filling imperfections */" },
#endif
		{ "EditCondition", "GenerateCap" },
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a clean up pass to the cap render target to remove filling imperfections" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiquidAdaptation_MetaData[] = {
		{ "Category", "LiquidSettings|Optimization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** For non uniform objects and uncentered pivot point, compute the object volume to set the adapted liquid offset */" },
#endif
		{ "ModuleRelativePath", "Public/LiquidShaderComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "For non uniform objects and uncentered pivot point, compute the object volume to set the adapted liquid offset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LiquidMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IncludeMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncludeMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LS_StaticMeshComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WavesIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WavesRotationSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WavesOffsetSensitivity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Viscosity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WavesRenderTargetMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WavesRenderTargetTexture;
	static void NewProp_ShowVoxel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShowVoxel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VoxelFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdaptationSpeedScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDF_CapDistanceMaskMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDF_CapJumpFloodMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapRenderTargetTexture;
	static void NewProp_GenerateCap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GenerateCap;
	static void NewProp_CleanUpCap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CleanUpCap;
	static void NewProp_LiquidAdaptation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LiquidAdaptation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiquidShaderComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_LiquidMaterialInstance = { "LiquidMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, LiquidMaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiquidMaterialInstance_MetaData), NewProp_LiquidMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_IncludeMaterials_Inner = { "IncludeMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_IncludeMaterials = { "IncludeMaterials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, IncludeMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeMaterials_MetaData), NewProp_IncludeMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_LS_StaticMeshComponent = { "LS_StaticMeshComponent", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, LS_StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LS_StaticMeshComponent_MetaData), NewProp_LS_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesIntensity = { "WavesIntensity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, WavesIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavesIntensity_MetaData), NewProp_WavesIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesRotationSensitivity = { "WavesRotationSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, WavesRotationSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavesRotationSensitivity_MetaData), NewProp_WavesRotationSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesOffsetSensitivity = { "WavesOffsetSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, WavesOffsetSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavesOffsetSensitivity_MetaData), NewProp_WavesOffsetSensitivity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_Viscosity = { "Viscosity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, Viscosity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Viscosity_MetaData), NewProp_Viscosity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesRenderTargetMaterial = { "WavesRenderTargetMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, WavesRenderTargetMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavesRenderTargetMaterial_MetaData), NewProp_WavesRenderTargetMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesRenderTargetTexture = { "WavesRenderTargetTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, WavesRenderTargetTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WavesRenderTargetTexture_MetaData), NewProp_WavesRenderTargetTexture_MetaData) };
void Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_ShowVoxel_SetBit(void* Obj)
{
	((ULiquidShaderComponent*)Obj)->ShowVoxel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_ShowVoxel = { "ShowVoxel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiquidShaderComponent), &Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_ShowVoxel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShowVoxel_MetaData), NewProp_ShowVoxel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_VoxelFactor = { "VoxelFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, VoxelFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoxelFactor_MetaData), NewProp_VoxelFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_AdaptationSpeedScale = { "AdaptationSpeedScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, AdaptationSpeedScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdaptationSpeedScale_MetaData), NewProp_AdaptationSpeedScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_SDF_CapDistanceMaskMaterial = { "SDF_CapDistanceMaskMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, SDF_CapDistanceMaskMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDF_CapDistanceMaskMaterial_MetaData), NewProp_SDF_CapDistanceMaskMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_SDF_CapJumpFloodMaterial = { "SDF_CapJumpFloodMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, SDF_CapJumpFloodMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDF_CapJumpFloodMaterial_MetaData), NewProp_SDF_CapJumpFloodMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_CapRenderTargetTexture = { "CapRenderTargetTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULiquidShaderComponent, CapRenderTargetTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapRenderTargetTexture_MetaData), NewProp_CapRenderTargetTexture_MetaData) };
void Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_GenerateCap_SetBit(void* Obj)
{
	((ULiquidShaderComponent*)Obj)->GenerateCap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_GenerateCap = { "GenerateCap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiquidShaderComponent), &Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_GenerateCap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerateCap_MetaData), NewProp_GenerateCap_MetaData) };
void Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_CleanUpCap_SetBit(void* Obj)
{
	((ULiquidShaderComponent*)Obj)->CleanUpCap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_CleanUpCap = { "CleanUpCap", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiquidShaderComponent), &Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_CleanUpCap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CleanUpCap_MetaData), NewProp_CleanUpCap_MetaData) };
void Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_LiquidAdaptation_SetBit(void* Obj)
{
	((ULiquidShaderComponent*)Obj)->LiquidAdaptation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_LiquidAdaptation = { "LiquidAdaptation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULiquidShaderComponent), &Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_LiquidAdaptation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiquidAdaptation_MetaData), NewProp_LiquidAdaptation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiquidShaderComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_LiquidMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_IncludeMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_IncludeMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_LS_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesRotationSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesOffsetSensitivity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_Viscosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesRenderTargetMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_WavesRenderTargetTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_ShowVoxel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_VoxelFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_AdaptationSpeedScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_SDF_CapDistanceMaskMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_SDF_CapJumpFloodMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_CapRenderTargetTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_GenerateCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_CleanUpCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiquidShaderComponent_Statics::NewProp_LiquidAdaptation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiquidShaderComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULiquidShaderComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_LiquidShader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiquidShaderComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULiquidShaderComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUTC_LSInterface_NoRegister, (int32)VTABLE_OFFSET(ULiquidShaderComponent, IUTC_LSInterface), false },  // 2455740133
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiquidShaderComponent_Statics::ClassParams = {
	&ULiquidShaderComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULiquidShaderComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULiquidShaderComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiquidShaderComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiquidShaderComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULiquidShaderComponent()
{
	if (!Z_Registration_Info_UClass_ULiquidShaderComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiquidShaderComponent.OuterSingleton, Z_Construct_UClass_ULiquidShaderComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULiquidShaderComponent.OuterSingleton;
}
template<> UTC_LIQUIDSHADER_API UClass* StaticClass<ULiquidShaderComponent>()
{
	return ULiquidShaderComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULiquidShaderComponent);
ULiquidShaderComponent::~ULiquidShaderComponent() {}
// End Class ULiquidShaderComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ElixirEmporium_5_4_Plugins_UTC_LiquidShader_Source_UTC_LiquidShader_Public_LiquidShaderComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULiquidShaderComponent, ULiquidShaderComponent::StaticClass, TEXT("ULiquidShaderComponent"), &Z_Registration_Info_UClass_ULiquidShaderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiquidShaderComponent), 3161566861U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ElixirEmporium_5_4_Plugins_UTC_LiquidShader_Source_UTC_LiquidShader_Public_LiquidShaderComponent_h_2061445521(TEXT("/Script/UTC_LiquidShader"),
	Z_CompiledInDeferFile_FID_UE_Projects_ElixirEmporium_5_4_Plugins_UTC_LiquidShader_Source_UTC_LiquidShader_Public_LiquidShaderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ElixirEmporium_5_4_Plugins_UTC_LiquidShader_Source_UTC_LiquidShader_Public_LiquidShaderComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
