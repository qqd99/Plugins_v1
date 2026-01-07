// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Settings/OWRPGDeveloperSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWRPGDeveloperSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGDeveloperSettings();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWRPGRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWRPGDeveloperSettings **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWRPGDeveloperSettings;
UClass* UOWRPGDeveloperSettings::GetPrivateStaticClass()
{
	using TClass = UOWRPGDeveloperSettings;
	if (!Z_Registration_Info_UClass_UOWRPGDeveloperSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWRPGDeveloperSettings"),
			Z_Registration_Info_UClass_UOWRPGDeveloperSettings.InnerSingleton,
			StaticRegisterNativesUOWRPGDeveloperSettings,
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
	return Z_Registration_Info_UClass_UOWRPGDeveloperSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWRPGDeveloperSettings_NoRegister()
{
	return UOWRPGDeveloperSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWRPGDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * OWRPG settings (soft references only).\n * This avoids any hard coupling to a specific project module and supports \"copy plugin to new project\" workflows.\n */" },
#endif
		{ "DisplayName", "OWRPG" },
		{ "IncludePath", "Settings/OWRPGDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/OWRPGDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OWRPG settings (soft references only).\nThis avoids any hard coupling to a specific project module and supports \"copy plugin to new project\" workflows." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreGameFeatureData_MetaData[] = {
		{ "AllowedClasses", "/Script/GameFeatures.GameFeatureData" },
		{ "Category", "Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Soft reference to the core GameFeatureData asset (e.g., /OWRPG/GFD_OWRPG.GFD_OWRPG). */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/OWRPGDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft reference to the core GameFeatureData asset (e.g., /OWRPG/GFD_OWRPG.GFD_OWRPG)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoreActionSet_MetaData[] = {
		{ "Category", "Core" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Soft reference to the core action set, if you use Lyra Experience Action Sets. */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/OWRPGDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Soft reference to the core action set, if you use Lyra Experience Action Sets." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UOWRPGDeveloperSettings constinit property declarations ******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoreGameFeatureData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CoreActionSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOWRPGDeveloperSettings constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWRPGDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWRPGDeveloperSettings_Statics

// ********** Begin Class UOWRPGDeveloperSettings Property Definitions *****************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::NewProp_CoreGameFeatureData = { "CoreGameFeatureData", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWRPGDeveloperSettings, CoreGameFeatureData), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreGameFeatureData_MetaData), NewProp_CoreGameFeatureData_MetaData) }; // 2425717601
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::NewProp_CoreActionSet = { "CoreActionSet", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOWRPGDeveloperSettings, CoreActionSet), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoreActionSet_MetaData), NewProp_CoreActionSet_MetaData) }; // 2425717601
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::NewProp_CoreGameFeatureData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::NewProp_CoreActionSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::PropPointers) < 2048);
// ********** End Class UOWRPGDeveloperSettings Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::ClassParams = {
	&UOWRPGDeveloperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::Class_MetaDataParams)
};
void UOWRPGDeveloperSettings::StaticRegisterNativesUOWRPGDeveloperSettings()
{
}
UClass* Z_Construct_UClass_UOWRPGDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UOWRPGDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWRPGDeveloperSettings.OuterSingleton, Z_Construct_UClass_UOWRPGDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWRPGDeveloperSettings.OuterSingleton;
}
UOWRPGDeveloperSettings::UOWRPGDeveloperSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWRPGDeveloperSettings);
UOWRPGDeveloperSettings::~UOWRPGDeveloperSettings() {}
// ********** End Class UOWRPGDeveloperSettings ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h__Script_OWRPGRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWRPGDeveloperSettings, UOWRPGDeveloperSettings::StaticClass, TEXT("UOWRPGDeveloperSettings"), &Z_Registration_Info_UClass_UOWRPGDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWRPGDeveloperSettings), 3136618000U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h__Script_OWRPGRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h__Script_OWRPGRuntime_4165421875{
	TEXT("/Script/OWRPGRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h__Script_OWRPGRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h__Script_OWRPGRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
