// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameFeatures/GFA_GrantAbilities.h"

#ifdef OWRPGRUNTIME_GFA_GrantAbilities_generated_h
#error "GFA_GrantAbilities.generated.h already included, missing '#pragma once' in GFA_GrantAbilities.h"
#endif
#define OWRPGRUNTIME_GFA_GrantAbilities_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;

// ********** Begin ScriptStruct FOWRPGGrantAbilityEntry *******************************************
struct Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics;
#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_21_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics; \
	OWRPGRUNTIME_API static class UScriptStruct* StaticStruct();


struct FOWRPGGrantAbilityEntry;
// ********** End ScriptStruct FOWRPGGrantAbilityEntry *********************************************

// ********** Begin Class UGFA_GrantAbilities ******************************************************
#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePawnReady);


struct Z_Construct_UClass_UGFA_GrantAbilities_Statics;
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UGFA_GrantAbilities_NoRegister();

#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGFA_GrantAbilities(); \
	friend struct ::Z_Construct_UClass_UGFA_GrantAbilities_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWRPGRUNTIME_API UClass* ::Z_Construct_UClass_UGFA_GrantAbilities_NoRegister(); \
public: \
	DECLARE_CLASS2(UGFA_GrantAbilities, UGameFeatureAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWRPGRuntime"), Z_Construct_UClass_UGFA_GrantAbilities_NoRegister) \
	DECLARE_SERIALIZER(UGFA_GrantAbilities)


#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OWRPGRUNTIME_API UGFA_GrantAbilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGFA_GrantAbilities(UGFA_GrantAbilities&&) = delete; \
	UGFA_GrantAbilities(const UGFA_GrantAbilities&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OWRPGRUNTIME_API, UGFA_GrantAbilities); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGFA_GrantAbilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGFA_GrantAbilities) \
	OWRPGRUNTIME_API virtual ~UGFA_GrantAbilities();


#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_31_PROLOG
#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_34_INCLASS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGFA_GrantAbilities;

// ********** End Class UGFA_GrantAbilities ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
