// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inv/RPGInvTypes.h"
#include "Net/Serialization/FastArraySerializerImplementation.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGInvTypes() {}

// ********** Begin Cross Module References ********************************************************
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
NETCORE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvComp_NoRegister();
RPGINVENTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInvItem();
RPGINVENTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInvItemKey();
RPGINVENTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInvList();
UPackage* Z_Construct_UPackage__Script_RPGInventoryRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FRPGInvItemKey ****************************************************
struct Z_Construct_UScriptStruct_FRPGInvItemKey_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRPGInvItemKey); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRPGInvItemKey); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Minimal item key for v0.2.\n * Later we will replace/extend this with an Item Definition asset + fragments (Minecraft-like is still compatible).\n */" },
#endif
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Minimal item key for v0.2.\nLater we will replace/extend this with an Item Definition asset + fragments (Minecraft-like is still compatible)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "RPGInvItemKey" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRPGInvItemKey constinit property declarations ********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRPGInvItemKey constinit property declarations **********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGInvItemKey>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRPGInvItemKey_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGInvItemKey;
class UScriptStruct* FRPGInvItemKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGInvItemKey.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGInvItemKey.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGInvItemKey, (UObject*)Z_Construct_UPackage__Script_RPGInventoryRuntime(), TEXT("RPGInvItemKey"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGInvItemKey.OuterSingleton;
	}

// ********** Begin ScriptStruct FRPGInvItemKey Property Definitions *******************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInvItemKey, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::NewProp_Id,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRPGInvItemKey Property Definitions *********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
	nullptr,
	&NewStructOps,
	"RPGInvItemKey",
	Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::PropPointers),
	sizeof(FRPGInvItemKey),
	alignof(FRPGInvItemKey),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGInvItemKey()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGInvItemKey.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGInvItemKey.InnerSingleton, Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRPGInvItemKey.InnerSingleton);
}
// ********** End ScriptStruct FRPGInvItemKey ******************************************************

// ********** Begin ScriptStruct FRPGInvItem *******************************************************
struct Z_Construct_UScriptStruct_FRPGInvItem_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRPGInvItem); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRPGInvItem); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "RPGInvItem" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Qty_MetaData[] = {
		{ "Category", "RPGInvItem" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Slot_MetaData[] = {
		{ "Category", "RPGInvItem" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRPGInvItem constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Qty;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Slot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRPGInvItem constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGInvItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRPGInvItem_Statics
static_assert(std::is_polymorphic<FRPGInvItem>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FRPGInvItem cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGInvItem;
class UScriptStruct* FRPGInvItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGInvItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGInvItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGInvItem, (UObject*)Z_Construct_UPackage__Script_RPGInventoryRuntime(), TEXT("RPGInvItem"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGInvItem.OuterSingleton;
	}

// ********** Begin ScriptStruct FRPGInvItem Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGInvItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInvItem, Key), Z_Construct_UScriptStruct_FRPGInvItemKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 1963684159
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPGInvItem_Statics::NewProp_Qty = { "Qty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInvItem, Qty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Qty_MetaData), NewProp_Qty_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRPGInvItem_Statics::NewProp_Slot = { "Slot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInvItem, Slot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Slot_MetaData), NewProp_Slot_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGInvItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInvItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInvItem_Statics::NewProp_Qty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInvItem_Statics::NewProp_Slot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvItem_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRPGInvItem Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGInvItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
	Z_Construct_UScriptStruct_FFastArraySerializerItem,
	&NewStructOps,
	"RPGInvItem",
	Z_Construct_UScriptStruct_FRPGInvItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvItem_Statics::PropPointers),
	sizeof(FRPGInvItem),
	alignof(FRPGInvItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGInvItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGInvItem()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGInvItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGInvItem.InnerSingleton, Z_Construct_UScriptStruct_FRPGInvItem_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRPGInvItem.InnerSingleton);
}
// ********** End ScriptStruct FRPGInvItem *********************************************************

// ********** Begin ScriptStruct FRPGInvList *******************************************************
struct Z_Construct_UScriptStruct_FRPGInvList_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FRPGInvList); }
	static inline consteval int16 GetStructAlignment() { return alignof(FRPGInvList); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Optional: owner component pointer for callbacks later\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional: owner component pointer for callbacks later" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FRPGInvList constinit property declarations ***********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FRPGInvList constinit property declarations *************************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPGInvList>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FRPGInvList_Statics
static_assert(std::is_polymorphic<FRPGInvList>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FRPGInvList cannot be polymorphic unless super FFastArraySerializer is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FRPGInvList;
class UScriptStruct* FRPGInvList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGInvList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FRPGInvList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPGInvList, (UObject*)Z_Construct_UPackage__Script_RPGInventoryRuntime(), TEXT("RPGInvList"));
	}
	return Z_Registration_Info_UScriptStruct_FRPGInvList.OuterSingleton;
	}
#if defined(UE_NET_HAS_IRIS_FASTARRAY_BINDING) && UE_NET_HAS_IRIS_FASTARRAY_BINDING
UE_NET_IMPLEMENT_FASTARRAY(FRPGInvList);
#else
UE_NET_IMPLEMENT_FASTARRAY_STUB(FRPGInvList);
#endif

// ********** Begin ScriptStruct FRPGInvList Property Definitions **********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPGInvList_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRPGInvItem, METADATA_PARAMS(0, nullptr) }; // 2541665473
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRPGInvList_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInvList, Items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Items_MetaData), NewProp_Items_MetaData) }; // 2541665473
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRPGInvList_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0114000080080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPGInvList, Owner), Z_Construct_UClass_URPGInvComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPGInvList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInvList_Statics::NewProp_Items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInvList_Statics::NewProp_Items,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPGInvList_Statics::NewProp_Owner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvList_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FRPGInvList Property Definitions ************************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPGInvList_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
	Z_Construct_UScriptStruct_FFastArraySerializer,
	&NewStructOps,
	"RPGInvList",
	Z_Construct_UScriptStruct_FRPGInvList_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvList_Statics::PropPointers),
	sizeof(FRPGInvList),
	alignof(FRPGInvList),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPGInvList_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPGInvList_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPGInvList()
{
	if (!Z_Registration_Info_UScriptStruct_FRPGInvList.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FRPGInvList.InnerSingleton, Z_Construct_UScriptStruct_FRPGInvList_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FRPGInvList.InnerSingleton);
}
// ********** End ScriptStruct FRPGInvList *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvTypes_h__Script_RPGInventoryRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRPGInvItemKey::StaticStruct, Z_Construct_UScriptStruct_FRPGInvItemKey_Statics::NewStructOps, TEXT("RPGInvItemKey"),&Z_Registration_Info_UScriptStruct_FRPGInvItemKey, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGInvItemKey), 1963684159U) },
		{ FRPGInvItem::StaticStruct, Z_Construct_UScriptStruct_FRPGInvItem_Statics::NewStructOps, TEXT("RPGInvItem"),&Z_Registration_Info_UScriptStruct_FRPGInvItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGInvItem), 2541665473U) },
		{ FRPGInvList::StaticStruct, Z_Construct_UScriptStruct_FRPGInvList_Statics::NewStructOps, TEXT("RPGInvList"),&Z_Registration_Info_UScriptStruct_FRPGInvList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPGInvList), 4143411524U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvTypes_h__Script_RPGInventoryRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvTypes_h__Script_RPGInventoryRuntime_2757655431{
	TEXT("/Script/RPGInventoryRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvTypes_h__Script_RPGInventoryRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvTypes_h__Script_RPGInventoryRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
