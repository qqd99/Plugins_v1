// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inv/RPGInvComp.h"

#ifdef RPGINVENTORYRUNTIME_RPGInvComp_generated_h
#error "RPGInvComp.generated.h already included, missing '#pragma once' in RPGInvComp.h"
#endif
#define RPGINVENTORYRUNTIME_RPGInvComp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRPGInvItem;

// ********** Begin Class URPGInvComp **************************************************************
#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetItems); \
	DECLARE_FUNCTION(execGetSlotCount); \
	DECLARE_FUNCTION(execGetHeight); \
	DECLARE_FUNCTION(execGetWidth);


struct Z_Construct_UClass_URPGInvComp_Statics;
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvComp_NoRegister();

#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURPGInvComp(); \
	friend struct ::Z_Construct_UClass_URPGInvComp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend RPGINVENTORYRUNTIME_API UClass* ::Z_Construct_UClass_URPGInvComp_NoRegister(); \
public: \
	DECLARE_CLASS2(URPGInvComp, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/RPGInventoryRuntime"), Z_Construct_UClass_URPGInvComp_NoRegister) \
	DECLARE_SERIALIZER(URPGInvComp) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		List=NETFIELD_REP_START, \
		NETFIELD_REP_END=List	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	URPGInvComp(URPGInvComp&&) = delete; \
	URPGInvComp(const URPGInvComp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URPGInvComp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URPGInvComp); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(URPGInvComp) \
	NO_API virtual ~URPGInvComp();


#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h_10_PROLOG
#define FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h_13_INCLASS_NO_PURE_DECLS \
	FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class URPGInvComp;

// ********** End Class URPGInvComp ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
