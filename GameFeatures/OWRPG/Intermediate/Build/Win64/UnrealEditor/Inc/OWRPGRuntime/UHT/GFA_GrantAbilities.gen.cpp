// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GFA_GrantAbilities.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeGFA_GrantAbilities() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UGFA_GrantAbilities();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UGFA_GrantAbilities_NoRegister();
OWRPGRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry();
UPackage* Z_Construct_UPackage__Script_OWRPGRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FOWRPGGrantAbilityEntry *******************************************
struct Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FOWRPGGrantAbilityEntry); }
	static inline consteval int16 GetStructAlignment() { return alignof(FOWRPGGrantAbilityEntry); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameFeatures/GFA_GrantAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ability_MetaData[] = {
		{ "Category", "OWRPGGrantAbilityEntry" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability class to grant (soft so we don't hard-reference from outside OWRPG)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GFA_GrantAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability class to grant (soft so we don't hard-reference from outside OWRPG)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "OWRPGGrantAbilityEntry" },
		{ "ModuleRelativePath", "Public/GameFeatures/GFA_GrantAbilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FOWRPGGrantAbilityEntry constinit property declarations ***********
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_Ability;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FOWRPGGrantAbilityEntry constinit property declarations *************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOWRPGGrantAbilityEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FOWRPGGrantAbilityEntry;
class UScriptStruct* FOWRPGGrantAbilityEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FOWRPGGrantAbilityEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FOWRPGGrantAbilityEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry, (UObject*)Z_Construct_UPackage__Script_OWRPGRuntime(), TEXT("OWRPGGrantAbilityEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FOWRPGGrantAbilityEntry.OuterSingleton;
	}

// ********** Begin ScriptStruct FOWRPGGrantAbilityEntry Property Definitions **********************
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::NewProp_Ability = { "Ability", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWRPGGrantAbilityEntry, Ability), Z_Construct_UClass_UGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ability_MetaData), NewProp_Ability_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FOWRPGGrantAbilityEntry, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::NewProp_Ability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FOWRPGGrantAbilityEntry Property Definitions ************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
	nullptr,
	&NewStructOps,
	"OWRPGGrantAbilityEntry",
	Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::PropPointers),
	sizeof(FOWRPGGrantAbilityEntry),
	alignof(FOWRPGGrantAbilityEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FOWRPGGrantAbilityEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FOWRPGGrantAbilityEntry.InnerSingleton, Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FOWRPGGrantAbilityEntry.InnerSingleton);
}
// ********** End ScriptStruct FOWRPGGrantAbilityEntry *********************************************

// ********** Begin Class UGFA_GrantAbilities Function HandlePawnReady *****************************
struct Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics
{
	struct GFA_GrantAbilities_eventHandlePawnReady_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeatures/GFA_GrantAbilities.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePawnReady constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandlePawnReady constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandlePawnReady Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GFA_GrantAbilities_eventHandlePawnReady_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::PropPointers) < 2048);
// ********** End Function HandlePawnReady Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGFA_GrantAbilities, nullptr, "HandlePawnReady", 	Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::GFA_GrantAbilities_eventHandlePawnReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::GFA_GrantAbilities_eventHandlePawnReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGFA_GrantAbilities::execHandlePawnReady)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePawnReady(Z_Param_Pawn);
	P_NATIVE_END;
}
// ********** End Class UGFA_GrantAbilities Function HandlePawnReady *******************************

// ********** Begin Class UGFA_GrantAbilities ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UGFA_GrantAbilities;
UClass* UGFA_GrantAbilities::GetPrivateStaticClass()
{
	using TClass = UGFA_GrantAbilities;
	if (!Z_Registration_Info_UClass_UGFA_GrantAbilities.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("GFA_GrantAbilities"),
			Z_Registration_Info_UClass_UGFA_GrantAbilities.InnerSingleton,
			StaticRegisterNativesUGFA_GrantAbilities,
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
	return Z_Registration_Info_UClass_UGFA_GrantAbilities.InnerSingleton;
}
UClass* Z_Construct_UClass_UGFA_GrantAbilities_NoRegister()
{
	return UGFA_GrantAbilities::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGFA_GrantAbilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "GFA_GrantAbilities" },
		{ "IncludePath", "GameFeatures/GFA_GrantAbilities.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GFA_GrantAbilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[] = {
		{ "Category", "Grant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Abilities granted to pawns (server authoritative)\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GFA_GrantAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Abilities granted to pawns (server authoritative)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRequireRPGPawnComp_MetaData[] = {
		{ "Category", "Grant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, only grant to pawns that have your URPGPawnComp (recommended).\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GFA_GrantAbilities.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, only grant to pawns that have your URPGPawnComp (recommended)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UGFA_GrantAbilities constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Abilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Abilities;
	static void NewProp_bRequireRPGPawnComp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequireRPGPawnComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGFA_GrantAbilities constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandlePawnReady"), .Pointer = &UGFA_GrantAbilities::execHandlePawnReady },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGFA_GrantAbilities_HandlePawnReady, "HandlePawnReady" }, // 2689166343
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGFA_GrantAbilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UGFA_GrantAbilities_Statics

// ********** Begin Class UGFA_GrantAbilities Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGFA_GrantAbilities_Statics::NewProp_Abilities_Inner = { "Abilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry, METADATA_PARAMS(0, nullptr) }; // 342143760
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGFA_GrantAbilities_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGFA_GrantAbilities, Abilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Abilities_MetaData), NewProp_Abilities_MetaData) }; // 342143760
void Z_Construct_UClass_UGFA_GrantAbilities_Statics::NewProp_bRequireRPGPawnComp_SetBit(void* Obj)
{
	((UGFA_GrantAbilities*)Obj)->bRequireRPGPawnComp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGFA_GrantAbilities_Statics::NewProp_bRequireRPGPawnComp = { "bRequireRPGPawnComp", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGFA_GrantAbilities), &Z_Construct_UClass_UGFA_GrantAbilities_Statics::NewProp_bRequireRPGPawnComp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRequireRPGPawnComp_MetaData), NewProp_bRequireRPGPawnComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGFA_GrantAbilities_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFA_GrantAbilities_Statics::NewProp_Abilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFA_GrantAbilities_Statics::NewProp_Abilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGFA_GrantAbilities_Statics::NewProp_bRequireRPGPawnComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFA_GrantAbilities_Statics::PropPointers) < 2048);
// ********** End Class UGFA_GrantAbilities Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UGFA_GrantAbilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGFA_GrantAbilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGFA_GrantAbilities_Statics::ClassParams = {
	&UGFA_GrantAbilities::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGFA_GrantAbilities_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGFA_GrantAbilities_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGFA_GrantAbilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UGFA_GrantAbilities_Statics::Class_MetaDataParams)
};
void UGFA_GrantAbilities::StaticRegisterNativesUGFA_GrantAbilities()
{
	UClass* Class = UGFA_GrantAbilities::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UGFA_GrantAbilities_Statics::Funcs));
}
UClass* Z_Construct_UClass_UGFA_GrantAbilities()
{
	if (!Z_Registration_Info_UClass_UGFA_GrantAbilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGFA_GrantAbilities.OuterSingleton, Z_Construct_UClass_UGFA_GrantAbilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGFA_GrantAbilities.OuterSingleton;
}
UGFA_GrantAbilities::UGFA_GrantAbilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGFA_GrantAbilities);
UGFA_GrantAbilities::~UGFA_GrantAbilities() {}
// ********** End Class UGFA_GrantAbilities ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h__Script_OWRPGRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FOWRPGGrantAbilityEntry::StaticStruct, Z_Construct_UScriptStruct_FOWRPGGrantAbilityEntry_Statics::NewStructOps, TEXT("OWRPGGrantAbilityEntry"),&Z_Registration_Info_UScriptStruct_FOWRPGGrantAbilityEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOWRPGGrantAbilityEntry), 342143760U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGFA_GrantAbilities, UGFA_GrantAbilities::StaticClass, TEXT("UGFA_GrantAbilities"), &Z_Registration_Info_UClass_UGFA_GrantAbilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGFA_GrantAbilities), 3169401450U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h__Script_OWRPGRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h__Script_OWRPGRuntime_1877622856{
	TEXT("/Script/OWRPGRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h__Script_OWRPGRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h__Script_OWRPGRuntime_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h__Script_OWRPGRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_GameFeatures_GFA_GrantAbilities_h__Script_OWRPGRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
