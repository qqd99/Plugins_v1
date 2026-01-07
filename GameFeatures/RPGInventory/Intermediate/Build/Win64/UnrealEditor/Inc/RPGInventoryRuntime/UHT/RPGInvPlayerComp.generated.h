// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inv/RPGInvPlayerComp.h"

#ifdef RPGINVENTORYRUNTIME_RPGInvPlayerComp_generated_h
#error "RPGInvPlayerComp.generated.h already included, missing '#pragma once' in RPGInvPlayerComp.h"
#endif
#define RPGINVENTORYRUNTIME_RPGInvPlayerComp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class URPGInvPlayerComp ********************************************************
struct Z_Construct_UClass_URPGInvPlayerComp_Statics;
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvPlayerComp_NoRegister();

#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInvPlayerComp(); \
	friend struct ::Z_Construct_UClass_URPGInvPlayerComp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGINVENTORYRUNTIME_API UClass* ::Z_Construct_UClass_URPGInvPlayerComp_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGInvPlayerComp, URPGInvComp, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGInventoryRuntime"), Z_Construct_UClass_URPGInvPlayerComp_NoRegister) \
	DECLARE_SERIALIZER(URPGInvPlayerComp)


#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGInvPlayerComp(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGInvPlayerComp(URPGInvPlayerComp&&) = delete; \
	URPGInvPlayerComp(const URPGInvPlayerComp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInvPlayerComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInvPlayerComp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URPGInvPlayerComp) \
	NO_API virtual ~URPGInvPlayerComp();


#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h_9_PROLOG
#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h_12_INCLASS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGInvPlayerComp;

// ********** End Class URPGInvPlayerComp **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvPlayerComp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
