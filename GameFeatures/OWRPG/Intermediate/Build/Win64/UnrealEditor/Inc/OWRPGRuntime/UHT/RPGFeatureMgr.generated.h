// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGFeatureMgr.h"

#ifdef OWRPGRUNTIME_RPGFeatureMgr_generated_h
#error "RPGFeatureMgr.generated.h already included, missing '#pragma once' in RPGFeatureMgr.h"
#endif
#define OWRPGRUNTIME_RPGFeatureMgr_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URPGFeatureMgr ***********************************************************
struct Z_Construct_UClass_URPGFeatureMgr_Statics;
OWRPGRUNTIME_API UClass* Z_Construct_UClass_URPGFeatureMgr_NoRegister();

#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGFeatureMgr(); \
	friend struct ::Z_Construct_UClass_URPGFeatureMgr_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWRPGRUNTIME_API UClass* ::Z_Construct_UClass_URPGFeatureMgr_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGFeatureMgr, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OWRPGRuntime"), Z_Construct_UClass_URPGFeatureMgr_NoRegister) \
	DECLARE_SERIALIZER(URPGFeatureMgr)


#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGFeatureMgr(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGFeatureMgr(URPGFeatureMgr&&) = delete; \
	URPGFeatureMgr(const URPGFeatureMgr&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGFeatureMgr); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGFeatureMgr); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGFeatureMgr) \
	NO_API virtual ~URPGFeatureMgr();


#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h_16_PROLOG
#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h_19_INCLASS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGFeatureMgr;

// ********** End Class URPGFeatureMgr *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_RPGFeatureMgr_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
