// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inv/RPGInvPlayerComp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGInvPlayerComp() {}

// ********** Begin Cross Module References ********************************************************
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvComp();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvPlayerComp();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvPlayerComp_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGInventoryRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInvPlayerComp ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInvPlayerComp;
UClass* URPGInvPlayerComp::GetPrivateStaticClass()
{
	using TClass = URPGInvPlayerComp;
	if (!Z_Registration_Info_UClass_URPGInvPlayerComp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RPGInvPlayerComp"),
			Z_Registration_Info_UClass_URPGInvPlayerComp.InnerSingleton,
			StaticRegisterNativesURPGInvPlayerComp,
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
	return Z_Registration_Info_UClass_URPGInvPlayerComp.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInvPlayerComp_NoRegister()
{
	return URPGInvPlayerComp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInvPlayerComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "RPG" },
		{ "IncludePath", "Inv/RPGInvPlayerComp.h" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvPlayerComp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URPGInvPlayerComp constinit property declarations ************************
// ********** End Class URPGInvPlayerComp constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInvPlayerComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URPGInvPlayerComp_Statics
UObject* (*const Z_Construct_UClass_URPGInvPlayerComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URPGInvComp,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvPlayerComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInvPlayerComp_Statics::ClassParams = {
	&URPGInvPlayerComp::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvPlayerComp_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInvPlayerComp_Statics::Class_MetaDataParams)
};
void URPGInvPlayerComp::StaticRegisterNativesURPGInvPlayerComp()
{
}
UClass* Z_Construct_UClass_URPGInvPlayerComp()
{
	if (!Z_Registration_Info_UClass_URPGInvPlayerComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInvPlayerComp.OuterSingleton, Z_Construct_UClass_URPGInvPlayerComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInvPlayerComp.OuterSingleton;
}
URPGInvPlayerComp::URPGInvPlayerComp() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URPGInvPlayerComp);
URPGInvPlayerComp::~URPGInvPlayerComp() {}
// ********** End Class URPGInvPlayerComp **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h__Script_RPGInventoryRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInvPlayerComp, URPGInvPlayerComp::StaticClass, TEXT("URPGInvPlayerComp"), &Z_Registration_Info_UClass_URPGInvPlayerComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInvPlayerComp), 4074070097U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h__Script_RPGInventoryRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h__Script_RPGInventoryRuntime_873207279{
	TEXT("/Script/RPGInventoryRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h__Script_RPGInventoryRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h__Script_RPGInventoryRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
