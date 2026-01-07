// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RPGInvHooks.h"

#ifdef RPGINVENTORYRUNTIME_RPGInvHooks_generated_h
#error "RPGInvHooks.generated.h already included, missing '#pragma once' in RPGInvHooks.h"
#endif
#define RPGINVENTORYRUNTIME_RPGInvHooks_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;

// ********** Begin Class URPGInvHooks *************************************************************
#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandlePawnReady);


struct Z_Construct_UClass_URPGInvHooks_Statics;
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvHooks_NoRegister();

#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInvHooks(); \
	friend struct ::Z_Construct_UClass_URPGInvHooks_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGINVENTORYRUNTIME_API UClass* ::Z_Construct_UClass_URPGInvHooks_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGInvHooks, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RPGInventoryRuntime"), Z_Construct_UClass_URPGInvHooks_NoRegister) \
	DECLARE_SERIALIZER(URPGInvHooks)


#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URPGInvHooks(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGInvHooks(URPGInvHooks&&) = delete; \
	URPGInvHooks(const URPGInvHooks&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInvHooks); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInvHooks); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URPGInvHooks) \
	NO_API virtual ~URPGInvHooks();


#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h_22_PROLOG
#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h_25_INCLASS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGInvHooks;

// ********** End Class URPGInvHooks ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
