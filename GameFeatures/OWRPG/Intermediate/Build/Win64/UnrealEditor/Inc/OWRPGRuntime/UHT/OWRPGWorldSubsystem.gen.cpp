// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/OWRPGWorldSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWRPGWorldSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGWorldSubsystem();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGWorldSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWRPGRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWRPGWorldSubsystem *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWRPGWorldSubsystem;
UClass* UOWRPGWorldSubsystem::GetPrivateStaticClass()
{
	using TClass = UOWRPGWorldSubsystem;
	if (!Z_Registration_Info_UClass_UOWRPGWorldSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWRPGWorldSubsystem"),
			Z_Registration_Info_UClass_UOWRPGWorldSubsystem.InnerSingleton,
			StaticRegisterNativesUOWRPGWorldSubsystem,
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
	return Z_Registration_Info_UClass_UOWRPGWorldSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWRPGWorldSubsystem_NoRegister()
{
	return UOWRPGWorldSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWRPGWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/OWRPGWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/OWRPGWorldSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWRPGWorldSubsystem constinit property declarations *********************
// ********** End Class UOWRPGWorldSubsystem constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWRPGWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWRPGWorldSubsystem_Statics
UObject* (*const Z_Construct_UClass_UOWRPGWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWRPGWorldSubsystem_Statics::ClassParams = {
	&UOWRPGWorldSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWRPGWorldSubsystem_Statics::Class_MetaDataParams)
};
void UOWRPGWorldSubsystem::StaticRegisterNativesUOWRPGWorldSubsystem()
{
}
UClass* Z_Construct_UClass_UOWRPGWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_UOWRPGWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWRPGWorldSubsystem.OuterSingleton, Z_Construct_UClass_UOWRPGWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWRPGWorldSubsystem.OuterSingleton;
}
UOWRPGWorldSubsystem::UOWRPGWorldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWRPGWorldSubsystem);
UOWRPGWorldSubsystem::~UOWRPGWorldSubsystem() {}
// ********** End Class UOWRPGWorldSubsystem *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGWorldSubsystem_h__Script_OWRPGRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWRPGWorldSubsystem, UOWRPGWorldSubsystem::StaticClass, TEXT("UOWRPGWorldSubsystem"), &Z_Registration_Info_UClass_UOWRPGWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWRPGWorldSubsystem), 1001243757U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGWorldSubsystem_h__Script_OWRPGRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGWorldSubsystem_h__Script_OWRPGRuntime_1052550736{
	TEXT("/Script/OWRPGRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGWorldSubsystem_h__Script_OWRPGRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGWorldSubsystem_h__Script_OWRPGRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
