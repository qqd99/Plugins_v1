// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/RPGPawnComp.h"

#ifdef OWRPGRUNTIME_RPGPawnComp_generated_h
#error "RPGPawnComp.generated.h already included, missing '#pragma once' in RPGPawnComp.h"
#endif
#define OWRPGRUNTIME_RPGPawnComp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
class UAbilitySystemComponent;

// ********** Begin Delegate FRPGPawnReadySig ******************************************************
#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_11_DELEGATE \
OWRPGRUNTIME_API void FRPGPawnReadySig_DelegateWrapper(const FMulticastScriptDelegate& RPGPawnReadySig, APawn* Pawn);


// ********** End Delegate FRPGPawnReadySig ********************************************************

// ********** Begin Class URPGPawnComp *************************************************************
#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetASC); \
	DECLARE_FUNCTION(execIsReady);


struct Z_Construct_UClass_URPGPawnComp_Statics;
OWRPGRUNTIME_API UClass* Z_Construct_UClass_URPGPawnComp_NoRegister();

#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGPawnComp(); \
	friend struct ::Z_Construct_UClass_URPGPawnComp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OWRPGRUNTIME_API UClass* ::Z_Construct_UClass_URPGPawnComp_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGPawnComp, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OWRPGRuntime"), Z_Construct_UClass_URPGPawnComp_NoRegister) \
	DECLARE_SERIALIZER(URPGPawnComp)


#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGPawnComp(URPGPawnComp&&) = delete; \
	URPGPawnComp(const URPGPawnComp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGPawnComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGPawnComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGPawnComp) \
	NO_API virtual ~URPGPawnComp();


#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_21_PROLOG
#define FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_24_INCLASS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGPawnComp;

// ********** End Class URPGPawnComp ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
