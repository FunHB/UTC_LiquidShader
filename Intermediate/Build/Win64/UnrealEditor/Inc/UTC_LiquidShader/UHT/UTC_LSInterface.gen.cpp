// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UTC_LiquidShader/Public/UTC_LSInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUTC_LSInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_UTC_LiquidShader();
UTC_LIQUIDSHADER_API UClass* Z_Construct_UClass_UUTC_LSInterface();
UTC_LIQUIDSHADER_API UClass* Z_Construct_UClass_UUTC_LSInterface_NoRegister();
// End Cross Module References

// Begin Interface UUTC_LSInterface Function RequestStaticMeshComponent
void IUTC_LSInterface::RequestStaticMeshComponent()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestStaticMeshComponent instead.");
}
static FName NAME_UUTC_LSInterface_RequestStaticMeshComponent = FName(TEXT("RequestStaticMeshComponent"));
void IUTC_LSInterface::Execute_RequestStaticMeshComponent(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UUTC_LSInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UUTC_LSInterface_RequestStaticMeshComponent);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IUTC_LSInterface*)(O->GetNativeInterfaceAddress(UUTC_LSInterface::StaticClass())))
	{
		I->RequestStaticMeshComponent_Implementation();
	}
}
struct Z_Construct_UFunction_UUTC_LSInterface_RequestStaticMeshComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Liquid Shader" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event to get the liquid owner static mesh component */" },
#endif
		{ "ModuleRelativePath", "Public/UTC_LSInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event to get the liquid owner static mesh component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUTC_LSInterface_RequestStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUTC_LSInterface, nullptr, "RequestStaticMeshComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUTC_LSInterface_RequestStaticMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUTC_LSInterface_RequestStaticMeshComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUTC_LSInterface_RequestStaticMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUTC_LSInterface_RequestStaticMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IUTC_LSInterface::execRequestStaticMeshComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestStaticMeshComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UUTC_LSInterface Function RequestStaticMeshComponent

// Begin Interface UUTC_LSInterface
void UUTC_LSInterface::StaticRegisterNativesUUTC_LSInterface()
{
	UClass* Class = UUTC_LSInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestStaticMeshComponent", &IUTC_LSInterface::execRequestStaticMeshComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUTC_LSInterface);
UClass* Z_Construct_UClass_UUTC_LSInterface_NoRegister()
{
	return UUTC_LSInterface::StaticClass();
}
struct Z_Construct_UClass_UUTC_LSInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UTC_LSInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUTC_LSInterface_RequestStaticMeshComponent, "RequestStaticMeshComponent" }, // 2074378822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IUTC_LSInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUTC_LSInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_UTC_LiquidShader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUTC_LSInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUTC_LSInterface_Statics::ClassParams = {
	&UUTC_LSInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUTC_LSInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UUTC_LSInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUTC_LSInterface()
{
	if (!Z_Registration_Info_UClass_UUTC_LSInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUTC_LSInterface.OuterSingleton, Z_Construct_UClass_UUTC_LSInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUTC_LSInterface.OuterSingleton;
}
template<> UTC_LIQUIDSHADER_API UClass* StaticClass<UUTC_LSInterface>()
{
	return UUTC_LSInterface::StaticClass();
}
UUTC_LSInterface::UUTC_LSInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUTC_LSInterface);
UUTC_LSInterface::~UUTC_LSInterface() {}
// End Interface UUTC_LSInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_UE_Projects_ElixirEmporium_5_4_Plugins_UTC_LiquidShader_Source_UTC_LiquidShader_Public_UTC_LSInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUTC_LSInterface, UUTC_LSInterface::StaticClass, TEXT("UUTC_LSInterface"), &Z_Registration_Info_UClass_UUTC_LSInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUTC_LSInterface), 2455740133U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE_Projects_ElixirEmporium_5_4_Plugins_UTC_LiquidShader_Source_UTC_LiquidShader_Public_UTC_LSInterface_h_3508674405(TEXT("/Script/UTC_LiquidShader"),
	Z_CompiledInDeferFile_FID_UE_Projects_ElixirEmporium_5_4_Plugins_UTC_LiquidShader_Source_UTC_LiquidShader_Public_UTC_LSInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE_Projects_ElixirEmporium_5_4_Plugins_UTC_LiquidShader_Source_UTC_LiquidShader_Public_UTC_LSInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
