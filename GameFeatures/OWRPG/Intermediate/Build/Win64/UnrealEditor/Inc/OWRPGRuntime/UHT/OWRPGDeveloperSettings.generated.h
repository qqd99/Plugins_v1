// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/OWRPGDeveloperSettings.h"

#ifdef OWRPGRUNTIME_OWRPGDeveloperSettings_generated_h
#error "OWRPGDeveloperSettings.generated.h already included, missing '#pragma once' in OWRPGDeveloperSettings.h"
#endif
#define OWRPGRUNTIME_OWRPGDeveloperSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOWRPGDeveloperSettings **************************************************
struct Z_Construct_UClass_UOWRPGDeveloperSettings_Statics;
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGDeveloperSettings_NoRegister();

#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOWRPGDeveloperSettings(); \
	friend struct ::Z_Construct_UClass_UOWRPGDeveloperSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWRPGRUNTIME_API UClass* ::Z_Construct_UClass_UOWRPGDeveloperSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UOWRPGDeveloperSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWRPGRuntime"), Z_Construct_UClass_UOWRPGDeveloperSettings_NoRegister) \
	DECLARE_SERIALIZER(UOWRPGDeveloperSettings) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOWRPGDeveloperSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOWRPGDeveloperSettings(UOWRPGDeveloperSettings&&) = delete; \
	UOWRPGDeveloperSettings(const UOWRPGDeveloperSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOWRPGDeveloperSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOWRPGDeveloperSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOWRPGDeveloperSettings) \
	NO_API virtual ~UOWRPGDeveloperSettings();


#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h_13_PROLOG
#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h_16_INCLASS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOWRPGDeveloperSettings;

// ********** End Class UOWRPGDeveloperSettings ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Settings_OWRPGDeveloperSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
