// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RPGPawnComp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGPawnComp() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_URPGPawnComp();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_URPGPawnComp_NoRegister();
OWRPGRUNTIME_API UFunction* Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_OWRPGRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FRPGPawnReadySig ******************************************************
struct Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics
{
	struct _Script_OWRPGRuntime_eventRPGPawnReadySig_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/RPGPawnComp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FRPGPawnReadySig constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Delegate FRPGPawnReadySig constinit property declarations ************************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};

// ********** Begin Delegate FRPGPawnReadySig Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OWRPGRuntime_eventRPGPawnReadySig_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::PropPointers) < 2048);
// ********** End Delegate FRPGPawnReadySig Property Definitions ***********************************
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_OWRPGRuntime, nullptr, "RPGPawnReadySig__DelegateSignature", 	Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::PropPointers), 
sizeof(Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::_Script_OWRPGRuntime_eventRPGPawnReadySig_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::_Script_OWRPGRuntime_eventRPGPawnReadySig_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FRPGPawnReadySig_DelegateWrapper(const FMulticastScriptDelegate& RPGPawnReadySig, APawn* Pawn)
{
	struct _Script_OWRPGRuntime_eventRPGPawnReadySig_Parms
	{
		APawn* Pawn;
	};
	_Script_OWRPGRuntime_eventRPGPawnReadySig_Parms Parms;
	Parms.Pawn=Pawn;
	RPGPawnReadySig.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FRPGPawnReadySig ********************************************************

// ********** Begin Class URPGPawnComp Function GetASC *********************************************
struct Z_Construct_UFunction_URPGPawnComp_GetASC_Statics
{
	struct RPGPawnComp_eventGetASC_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Best-effort access to ASC once ready (may still be null for non-GAS pawns). */" },
#endif
		{ "ModuleRelativePath", "Public/Components/RPGPawnComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Best-effort access to ASC once ready (may still be null for non-GAS pawns)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetASC constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetASC constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetASC Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGPawnComp_eventGetASC_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::PropPointers) < 2048);
// ********** End Function GetASC Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGPawnComp, nullptr, "GetASC", 	Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::RPGPawnComp_eventGetASC_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::RPGPawnComp_eventGetASC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGPawnComp_GetASC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGPawnComp_GetASC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGPawnComp::execGetASC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetASC();
	P_NATIVE_END;
}
// ********** End Class URPGPawnComp Function GetASC ***********************************************

// ********** Begin Class URPGPawnComp Function IsReady ********************************************
struct Z_Construct_UFunction_URPGPawnComp_IsReady_Statics
{
	struct RPGPawnComp_eventIsReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns true once readiness has been reached. */" },
#endif
		{ "ModuleRelativePath", "Public/Components/RPGPawnComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true once readiness has been reached." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function IsReady constinit property declarations *******************************
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsReady constinit property declarations *********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsReady Property Definitions ******************************************
void Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RPGPawnComp_eventIsReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RPGPawnComp_eventIsReady_Parms), &Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::PropPointers) < 2048);
// ********** End Function IsReady Property Definitions ********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGPawnComp, nullptr, "IsReady", 	Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::RPGPawnComp_eventIsReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::RPGPawnComp_eventIsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGPawnComp_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGPawnComp_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGPawnComp::execIsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReady();
	P_NATIVE_END;
}
// ********** End Class URPGPawnComp Function IsReady **********************************************

// ********** Begin Class URPGPawnComp *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URPGPawnComp;
UClass* URPGPawnComp::GetPrivateStaticClass()
{
	using TClass = URPGPawnComp;
	if (!Z_Registration_Info_UClass_URPGPawnComp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RPGPawnComp"),
			Z_Registration_Info_UClass_URPGPawnComp.InnerSingleton,
			StaticRegisterNativesURPGPawnComp,
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
	return Z_Registration_Info_UClass_URPGPawnComp.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGPawnComp_NoRegister()
{
	return URPGPawnComp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGPawnComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "RPG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Core pawn component attached by OWRPG Game Feature.\n * Multiplayer-safe: no local-player assumptions; works on dedicated server.\n *\n * Purpose:\n * - Provide a stable \xef\xbf\xbdpawn ready\xef\xbf\xbd signal once PlayerState + ASC are available.\n * - Give optional plugins a safe place to hook without OWRPG depending on them.\n */" },
#endif
		{ "IncludePath", "Components/RPGPawnComp.h" },
		{ "ModuleRelativePath", "Public/Components/RPGPawnComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core pawn component attached by OWRPG Game Feature.\nMultiplayer-safe: no local-player assumptions; works on dedicated server.\n\nPurpose:\n- Provide a stable \xef\xbf\xbdpawn ready\xef\xbf\xbd signal once PlayerState + ASC are available.\n- Give optional plugins a safe place to hook without OWRPG depending on them." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPawnReady_MetaData[] = {
		{ "Category", "RPG" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired once when the pawn is considered ready (may fire on server and clients). */" },
#endif
		{ "ModuleRelativePath", "Public/Components/RPGPawnComp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired once when the pawn is considered ready (may fire on server and clients)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RPGPawnComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedASC_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/RPGPawnComp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URPGPawnComp constinit property declarations *****************************
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPawnReady;
	static void NewProp_bReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URPGPawnComp constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetASC"), .Pointer = &URPGPawnComp::execGetASC },
		{ .NameUTF8 = UTF8TEXT("IsReady"), .Pointer = &URPGPawnComp::execIsReady },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGPawnComp_GetASC, "GetASC" }, // 776471286
		{ &Z_Construct_UFunction_URPGPawnComp_IsReady, "IsReady" }, // 1722144435
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGPawnComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URPGPawnComp_Statics

// ********** Begin Class URPGPawnComp Property Definitions ****************************************
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URPGPawnComp_Statics::NewProp_OnPawnReady = { "OnPawnReady", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGPawnComp, OnPawnReady), Z_Construct_UDelegateFunction_OWRPGRuntime_RPGPawnReadySig__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPawnReady_MetaData), NewProp_OnPawnReady_MetaData) }; // 3201294832
void Z_Construct_UClass_URPGPawnComp_Statics::NewProp_bReady_SetBit(void* Obj)
{
	((URPGPawnComp*)Obj)->bReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URPGPawnComp_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URPGPawnComp), &Z_Construct_UClass_URPGPawnComp_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReady_MetaData), NewProp_bReady_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URPGPawnComp_Statics::NewProp_CachedASC = { "CachedASC", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGPawnComp, CachedASC), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedASC_MetaData), NewProp_CachedASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGPawnComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGPawnComp_Statics::NewProp_OnPawnReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGPawnComp_Statics::NewProp_bReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGPawnComp_Statics::NewProp_CachedASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGPawnComp_Statics::PropPointers) < 2048);
// ********** End Class URPGPawnComp Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_URPGPawnComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGPawnComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGPawnComp_Statics::ClassParams = {
	&URPGPawnComp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGPawnComp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGPawnComp_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGPawnComp_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGPawnComp_Statics::Class_MetaDataParams)
};
void URPGPawnComp::StaticRegisterNativesURPGPawnComp()
{
	UClass* Class = URPGPawnComp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URPGPawnComp_Statics::Funcs));
}
UClass* Z_Construct_UClass_URPGPawnComp()
{
	if (!Z_Registration_Info_UClass_URPGPawnComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGPawnComp.OuterSingleton, Z_Construct_UClass_URPGPawnComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGPawnComp.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URPGPawnComp);
URPGPawnComp::~URPGPawnComp() {}
// ********** End Class URPGPawnComp ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h__Script_OWRPGRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGPawnComp, URPGPawnComp::StaticClass, TEXT("URPGPawnComp"), &Z_Registration_Info_UClass_URPGPawnComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGPawnComp), 1231331840U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h__Script_OWRPGRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h__Script_OWRPGRuntime_4019386955{
	TEXT("/Script/OWRPGRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h__Script_OWRPGRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_Components_RPGPawnComp_h__Script_OWRPGRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
