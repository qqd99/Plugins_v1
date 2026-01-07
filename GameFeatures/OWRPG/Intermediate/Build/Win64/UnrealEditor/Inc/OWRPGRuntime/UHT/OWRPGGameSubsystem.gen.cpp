// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Subsystems/OWRPGGameSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWRPGGameSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGGameSubsystem();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGGameSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWRPGRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWRPGGameSubsystem ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWRPGGameSubsystem;
UClass* UOWRPGGameSubsystem::GetPrivateStaticClass()
{
	using TClass = UOWRPGGameSubsystem;
	if (!Z_Registration_Info_UClass_UOWRPGGameSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWRPGGameSubsystem"),
			Z_Registration_Info_UClass_UOWRPGGameSubsystem.InnerSingleton,
			StaticRegisterNativesUOWRPGGameSubsystem,
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
	return Z_Registration_Info_UClass_UOWRPGGameSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWRPGGameSubsystem_NoRegister()
{
	return UOWRPGGameSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWRPGGameSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Subsystems/OWRPGGameSubsystem.h" },
		{ "ModuleRelativePath", "Public/Subsystems/OWRPGGameSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWRPGGameSubsystem constinit property declarations **********************
// ********** End Class UOWRPGGameSubsystem constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWRPGGameSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWRPGGameSubsystem_Statics
UObject* (*const Z_Construct_UClass_UOWRPGGameSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGGameSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWRPGGameSubsystem_Statics::ClassParams = {
	&UOWRPGGameSubsystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGGameSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWRPGGameSubsystem_Statics::Class_MetaDataParams)
};
void UOWRPGGameSubsystem::StaticRegisterNativesUOWRPGGameSubsystem()
{
}
UClass* Z_Construct_UClass_UOWRPGGameSubsystem()
{
	if (!Z_Registration_Info_UClass_UOWRPGGameSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWRPGGameSubsystem.OuterSingleton, Z_Construct_UClass_UOWRPGGameSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWRPGGameSubsystem.OuterSingleton;
}
UOWRPGGameSubsystem::UOWRPGGameSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWRPGGameSubsystem);
UOWRPGGameSubsystem::~UOWRPGGameSubsystem() {}
// ********** End Class UOWRPGGameSubsystem ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGGameSubsystem_h__Script_OWRPGRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWRPGGameSubsystem, UOWRPGGameSubsystem::StaticClass, TEXT("UOWRPGGameSubsystem"), &Z_Registration_Info_UClass_UOWRPGGameSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWRPGGameSubsystem), 4294811502U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGGameSubsystem_h__Script_OWRPGRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGGameSubsystem_h__Script_OWRPGRuntime_3584145317{
	TEXT("/Script/OWRPGRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGGameSubsystem_h__Script_OWRPGRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Subsystems_OWRPGGameSubsystem_h__Script_OWRPGRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
