// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInvGFA_Reg.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGInvGFA_Reg() {}

// ********** Begin Cross Module References ********************************************************
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvGFA_Reg();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvGFA_Reg_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGInventoryRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInvGFA_Reg ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInvGFA_Reg;
UClass* URPGInvGFA_Reg::GetPrivateStaticClass()
{
	using TClass = URPGInvGFA_Reg;
	if (!Z_Registration_Info_UClass_URPGInvGFA_Reg.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RPGInvGFA_Reg"),
			Z_Registration_Info_UClass_URPGInvGFA_Reg.InnerSingleton,
			StaticRegisterNativesURPGInvGFA_Reg,
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
	return Z_Registration_Info_UClass_URPGInvGFA_Reg.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInvGFA_Reg_NoRegister()
{
	return URPGInvGFA_Reg::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInvGFA_Reg_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Registers the Inventory modular feature provider while this Game Feature is active.\n */" },
#endif
		{ "DisplayName", "RPGInventory: Register" },
		{ "IncludePath", "RPGInvGFA_Reg.h" },
		{ "ModuleRelativePath", "Public/RPGInvGFA_Reg.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers the Inventory modular feature provider while this Game Feature is active." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class URPGInvGFA_Reg constinit property declarations ***************************
// ********** End Class URPGInvGFA_Reg constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInvGFA_Reg>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URPGInvGFA_Reg_Statics
UObject* (*const Z_Construct_UClass_URPGInvGFA_Reg_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvGFA_Reg_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInvGFA_Reg_Statics::ClassParams = {
	&URPGInvGFA_Reg::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvGFA_Reg_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInvGFA_Reg_Statics::Class_MetaDataParams)
};
void URPGInvGFA_Reg::StaticRegisterNativesURPGInvGFA_Reg()
{
}
UClass* Z_Construct_UClass_URPGInvGFA_Reg()
{
	if (!Z_Registration_Info_UClass_URPGInvGFA_Reg.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInvGFA_Reg.OuterSingleton, Z_Construct_UClass_URPGInvGFA_Reg_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInvGFA_Reg.OuterSingleton;
}
URPGInvGFA_Reg::URPGInvGFA_Reg(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URPGInvGFA_Reg);
URPGInvGFA_Reg::~URPGInvGFA_Reg() {}
// ********** End Class URPGInvGFA_Reg *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvGFA_Reg_h__Script_RPGInventoryRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInvGFA_Reg, URPGInvGFA_Reg::StaticClass, TEXT("URPGInvGFA_Reg"), &Z_Registration_Info_UClass_URPGInvGFA_Reg, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInvGFA_Reg), 1492300514U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvGFA_Reg_h__Script_RPGInventoryRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvGFA_Reg_h__Script_RPGInventoryRuntime_1666718029{
	TEXT("/Script/RPGInventoryRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvGFA_Reg_h__Script_RPGInventoryRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvGFA_Reg_h__Script_RPGInventoryRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
