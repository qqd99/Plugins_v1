// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/RPGInvDrop.h"

#ifdef RPGINVENTORYRUNTIME_RPGInvDrop_generated_h
#error "RPGInvDrop.generated.h already included, missing '#pragma once' in RPGInvDrop.h"
#endif
#define RPGINVENTORYRUNTIME_RPGInvDrop_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URPGInvChestComp;

// ********** Begin Class ARPGInvDrop **************************************************************
#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInv);


struct Z_Construct_UClass_ARPGInvDrop_Statics;
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_ARPGInvDrop_NoRegister();

#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARPGInvDrop(); \
	friend struct ::Z_Construct_UClass_ARPGInvDrop_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGINVENTORYRUNTIME_API UClass* ::Z_Construct_UClass_ARPGInvDrop_NoRegister(); \
public: \
	DECLARE_CLASS2(ARPGInvDrop, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGInventoryRuntime"), Z_Construct_UClass_ARPGInvDrop_NoRegister) \
	DECLARE_SERIALIZER(ARPGInvDrop)


#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ARPGInvDrop(ARPGInvDrop&&) = delete; \
	ARPGInvDrop(const ARPGInvDrop&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARPGInvDrop); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARPGInvDrop); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARPGInvDrop) \
	NO_API virtual ~ARPGInvDrop();


#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h_11_PROLOG
#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h_14_INCLASS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ARPGInvDrop;

// ********** End Class ARPGInvDrop ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
