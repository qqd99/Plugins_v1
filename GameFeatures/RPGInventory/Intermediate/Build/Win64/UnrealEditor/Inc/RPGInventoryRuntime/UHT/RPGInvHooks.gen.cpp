// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGInvHooks.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGInvHooks() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvHooks();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvHooks_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGInventoryRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInvHooks Function HandlePawnReady ************************************
struct Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics
{
	struct RPGInvHooks_eventHandlePawnReady_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RPGInvHooks.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandlePawnReady constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandlePawnReady constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandlePawnReady Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInvHooks_eventHandlePawnReady_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::PropPointers) < 2048);
// ********** End Function HandlePawnReady Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInvHooks, nullptr, "HandlePawnReady", 	Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::RPGInvHooks_eventHandlePawnReady_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::RPGInvHooks_eventHandlePawnReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInvHooks_HandlePawnReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInvHooks_HandlePawnReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInvHooks::execHandlePawnReady)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandlePawnReady(Z_Param_Pawn);
	P_NATIVE_END;
}
// ********** End Class URPGInvHooks Function HandlePawnReady **************************************

// ********** Begin Class URPGInvHooks *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInvHooks;
UClass* URPGInvHooks::GetPrivateStaticClass()
{
	using TClass = URPGInvHooks;
	if (!Z_Registration_Info_UClass_URPGInvHooks.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RPGInvHooks"),
			Z_Registration_Info_UClass_URPGInvHooks.InnerSingleton,
			StaticRegisterNativesURPGInvHooks,
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
	return Z_Registration_Info_UClass_URPGInvHooks.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInvHooks_NoRegister()
{
	return URPGInvHooks::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInvHooks_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Hooks object that binds to OWRPG pawn component events.\n * Lives in the GameInstance as Outer (created by FRPGInvFeature).\n */" },
#endif
		{ "IncludePath", "RPGInvHooks.h" },
		{ "ModuleRelativePath", "Public/RPGInvHooks.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hooks object that binds to OWRPG pawn component events.\nLives in the GameInstance as Outer (created by FRPGInvFeature)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/RPGInvHooks.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URPGInvHooks constinit property declarations *****************************
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URPGInvHooks constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandlePawnReady"), .Pointer = &URPGInvHooks::execHandlePawnReady },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGInvHooks_HandlePawnReady, "HandlePawnReady" }, // 937323349
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInvHooks>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URPGInvHooks_Statics

// ********** Begin Class URPGInvHooks Property Definitions ****************************************
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URPGInvHooks_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInvHooks, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGInvHooks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInvHooks_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvHooks_Statics::PropPointers) < 2048);
// ********** End Class URPGInvHooks Property Definitions ******************************************
UObject* (*const Z_Construct_UClass_URPGInvHooks_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvHooks_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInvHooks_Statics::ClassParams = {
	&URPGInvHooks::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGInvHooks_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvHooks_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvHooks_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInvHooks_Statics::Class_MetaDataParams)
};
void URPGInvHooks::StaticRegisterNativesURPGInvHooks()
{
	UClass* Class = URPGInvHooks::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URPGInvHooks_Statics::Funcs));
}
UClass* Z_Construct_UClass_URPGInvHooks()
{
	if (!Z_Registration_Info_UClass_URPGInvHooks.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInvHooks.OuterSingleton, Z_Construct_UClass_URPGInvHooks_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInvHooks.OuterSingleton;
}
URPGInvHooks::URPGInvHooks(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URPGInvHooks);
URPGInvHooks::~URPGInvHooks() {}
// ********** End Class URPGInvHooks ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h__Script_RPGInventoryRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInvHooks, URPGInvHooks::StaticClass, TEXT("URPGInvHooks"), &Z_Registration_Info_UClass_URPGInvHooks, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInvHooks), 1123924106U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h__Script_RPGInventoryRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h__Script_RPGInventoryRuntime_830620853{
	TEXT("/Script/RPGInventoryRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h__Script_RPGInventoryRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_RPGInvHooks_h__Script_RPGInventoryRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
