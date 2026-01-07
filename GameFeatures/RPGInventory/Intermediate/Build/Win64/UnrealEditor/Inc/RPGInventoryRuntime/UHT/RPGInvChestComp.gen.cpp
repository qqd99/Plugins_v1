// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inv/RPGInvChestComp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGInvChestComp() {}

// ********** Begin Cross Module References ********************************************************
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvChestComp();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvChestComp_NoRegister();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvComp();
UPackage* Z_Construct_UPackage__Script_RPGInventoryRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInvChestComp *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInvChestComp;
UClass* URPGInvChestComp::GetPrivateStaticClass()
{
	using TClass = URPGInvChestComp;
	if (!Z_Registration_Info_UClass_URPGInvChestComp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RPGInvChestComp"),
			Z_Registration_Info_UClass_URPGInvChestComp.InnerSingleton,
			StaticRegisterNativesURPGInvChestComp,
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
	return Z_Registration_Info_UClass_URPGInvChestComp.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInvChestComp_NoRegister()
{
	return URPGInvChestComp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInvChestComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "RPG" },
		{ "IncludePath", "Inv/RPGInvChestComp.h" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvChestComp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URPGInvChestComp constinit property declarations *************************
// ********** End Class URPGInvChestComp constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInvChestComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URPGInvChestComp_Statics
UObject* (*const Z_Construct_UClass_URPGInvChestComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URPGInvComp,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvChestComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInvChestComp_Statics::ClassParams = {
	&URPGInvChestComp::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvChestComp_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInvChestComp_Statics::Class_MetaDataParams)
};
void URPGInvChestComp::StaticRegisterNativesURPGInvChestComp()
{
}
UClass* Z_Construct_UClass_URPGInvChestComp()
{
	if (!Z_Registration_Info_UClass_URPGInvChestComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInvChestComp.OuterSingleton, Z_Construct_UClass_URPGInvChestComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInvChestComp.OuterSingleton;
}
URPGInvChestComp::URPGInvChestComp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URPGInvChestComp);
URPGInvChestComp::~URPGInvChestComp() {}
// ********** End Class URPGInvChestComp ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvChestComp_h__Script_RPGInventoryRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInvChestComp, URPGInvChestComp::StaticClass, TEXT("URPGInvChestComp"), &Z_Registration_Info_UClass_URPGInvChestComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInvChestComp), 2474883227U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvChestComp_h__Script_RPGInventoryRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvChestComp_h__Script_RPGInventoryRuntime_3840171398{
	TEXT("/Script/RPGInventoryRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvChestComp_h__Script_RPGInventoryRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvChestComp_h__Script_RPGInventoryRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
