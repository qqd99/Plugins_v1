// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GameFeatureAction_Initialize.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_Initialize() {}

// ********** Begin Cross Module References ********************************************************
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UGameFeatureAction_Initialize();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UGameFeatureAction_Initialize_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWRPGRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGameFeatureAction_Initialize ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGameFeatureAction_Initialize;
UClass* UGameFeatureAction_Initialize::GetPrivateStaticClass()
{
	using TClass = UGameFeatureAction_Initialize;
	if (!Z_Registration_Info_UClass_UGameFeatureAction_Initialize.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GameFeatureAction_Initialize"),
			Z_Registration_Info_UClass_UGameFeatureAction_Initialize.InnerSingleton,
			StaticRegisterNativesUGameFeatureAction_Initialize,
			sizeof(TClass),
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
	return Z_Registration_Info_UClass_UGameFeatureAction_Initialize.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameFeatureAction_Initialize_NoRegister()
{
	return UGameFeatureAction_Initialize::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OWRPG: Init Core" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_Initialize.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_Initialize.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGameFeatureAction_Initialize constinit property declarations ************
// ********** End Class UGameFeatureAction_Initialize constinit property declarations **************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_Initialize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGameFeatureAction_Initialize_Statics
UObject* (*const Z_Construct_UClass_UGameFeatureAction_Initialize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_Initialize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_Initialize_Statics::ClassParams = {
	&UGameFeatureAction_Initialize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_Initialize_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_Initialize_Statics::Class_MetaDataParams)
};
void UGameFeatureAction_Initialize::StaticRegisterNativesUGameFeatureAction_Initialize()
{
}
UClass* Z_Construct_UClass_UGameFeatureAction_Initialize()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_Initialize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_Initialize.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_Initialize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_Initialize.OuterSingleton;
}
UGameFeatureAction_Initialize::UGameFeatureAction_Initialize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGameFeatureAction_Initialize);
UGameFeatureAction_Initialize::~UGameFeatureAction_Initialize() {}
// ********** End Class UGameFeatureAction_Initialize **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GameFeatureAction_Initialize_h__Script_OWRPGRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_Initialize, UGameFeatureAction_Initialize::StaticClass, TEXT("UGameFeatureAction_Initialize"), &Z_Registration_Info_UClass_UGameFeatureAction_Initialize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_Initialize), 1165743752U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GameFeatureAction_Initialize_h__Script_OWRPGRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GameFeatureAction_Initialize_h__Script_OWRPGRuntime_251425160{
	TEXT("/Script/OWRPGRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GameFeatureAction_Initialize_h__Script_OWRPGRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GameFeatureAction_Initialize_h__Script_OWRPGRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
