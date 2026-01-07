// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGFeatureMgr.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGFeatureMgr() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_URPGFeatureMgr();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_URPGFeatureMgr_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWRPGRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGFeatureMgr ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URPGFeatureMgr;
UClass* URPGFeatureMgr::GetPrivateStaticClass()
{
	using TClass = URPGFeatureMgr;
	if (!Z_Registration_Info_UClass_URPGFeatureMgr.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RPGFeatureMgr"),
			Z_Registration_Info_UClass_URPGFeatureMgr.InnerSingleton,
			StaticRegisterNativesURPGFeatureMgr,
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
	return Z_Registration_Info_UClass_URPGFeatureMgr.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGFeatureMgr_NoRegister()
{
	return URPGFeatureMgr::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGFeatureMgr_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * World/GameInstance-scoped manager that initializes optional OWRPG feature providers\n * registered via IModularFeatures under IOWRPGFeature::GetModularFeatureName().\n */" },
#endif
		{ "IncludePath", "RPGFeatureMgr.h" },
		{ "ModuleRelativePath", "Public/RPGFeatureMgr.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World/GameInstance-scoped manager that initializes optional OWRPG feature providers\nregistered via IModularFeatures under IOWRPGFeature::GetModularFeatureName()." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GI_MetaData[] = {
		{ "ModuleRelativePath", "Public/RPGFeatureMgr.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URPGFeatureMgr constinit property declarations ***************************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_GI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URPGFeatureMgr constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGFeatureMgr>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URPGFeatureMgr_Statics

// ********** Begin Class URPGFeatureMgr Property Definitions **************************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URPGFeatureMgr_Statics::NewProp_GI = { "GI", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGFeatureMgr, GI), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GI_MetaData), NewProp_GI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGFeatureMgr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGFeatureMgr_Statics::NewProp_GI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGFeatureMgr_Statics::PropPointers) < 2048);
// ********** End Class URPGFeatureMgr Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_URPGFeatureMgr_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGFeatureMgr_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGFeatureMgr_Statics::ClassParams = {
	&URPGFeatureMgr::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URPGFeatureMgr_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGFeatureMgr_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGFeatureMgr_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGFeatureMgr_Statics::Class_MetaDataParams)
};
void URPGFeatureMgr::StaticRegisterNativesURPGFeatureMgr()
{
}
UClass* Z_Construct_UClass_URPGFeatureMgr()
{
	if (!Z_Registration_Info_UClass_URPGFeatureMgr.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGFeatureMgr.OuterSingleton, Z_Construct_UClass_URPGFeatureMgr_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGFeatureMgr.OuterSingleton;
}
URPGFeatureMgr::URPGFeatureMgr(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URPGFeatureMgr);
URPGFeatureMgr::~URPGFeatureMgr() {}
// ********** End Class URPGFeatureMgr *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h__Script_OWRPGRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGFeatureMgr, URPGFeatureMgr::StaticClass, TEXT("URPGFeatureMgr"), &Z_Registration_Info_UClass_URPGFeatureMgr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGFeatureMgr), 1075332896U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h__Script_OWRPGRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h__Script_OWRPGRuntime_2106507923{
	TEXT("/Script/OWRPGRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h__Script_OWRPGRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h__Script_OWRPGRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
