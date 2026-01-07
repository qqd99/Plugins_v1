// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/RPGInvDrop.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGInvDrop() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_ARPGInvDrop();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_ARPGInvDrop_NoRegister();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvChestComp_NoRegister();
UPackage* Z_Construct_UPackage__Script_RPGInventoryRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ARPGInvDrop Function GetInv **********************************************
struct Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics
{
	struct RPGInvDrop_eventGetInv_Parms
	{
		URPGInvChestComp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGInv" },
		{ "ModuleRelativePath", "Public/Actors/RPGInvDrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInv constinit property declarations ********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInv constinit property declarations **********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInv Property Definitions *******************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInvDrop_eventGetInv_Parms, ReturnValue), Z_Construct_UClass_URPGInvChestComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::PropPointers) < 2048);
// ********** End Function GetInv Property Definitions *********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ARPGInvDrop, nullptr, "GetInv", 	Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::RPGInvDrop_eventGetInv_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::Function_MetaDataParams), Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::RPGInvDrop_eventGetInv_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ARPGInvDrop_GetInv()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARPGInvDrop_GetInv_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ARPGInvDrop::execGetInv)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URPGInvChestComp**)Z_Param__Result=P_THIS->GetInv();
	P_NATIVE_END;
}
// ********** End Class ARPGInvDrop Function GetInv ************************************************

// ********** Begin Class ARPGInvDrop **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ARPGInvDrop;
UClass* ARPGInvDrop::GetPrivateStaticClass()
{
	using TClass = ARPGInvDrop;
	if (!Z_Registration_Info_UClass_ARPGInvDrop.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RPGInvDrop"),
			Z_Registration_Info_UClass_ARPGInvDrop.InnerSingleton,
			StaticRegisterNativesARPGInvDrop,
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
	return Z_Registration_Info_UClass_ARPGInvDrop.InnerSingleton;
}
UClass* Z_Construct_UClass_ARPGInvDrop_NoRegister()
{
	return ARPGInvDrop::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ARPGInvDrop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/RPGInvDrop.h" },
		{ "ModuleRelativePath", "Public/Actors/RPGInvDrop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inv_MetaData[] = {
		{ "Category", "RPGInvDrop" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/RPGInvDrop.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ARPGInvDrop constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Inv;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ARPGInvDrop constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetInv"), .Pointer = &ARPGInvDrop::execGetInv },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ARPGInvDrop_GetInv, "GetInv" }, // 3336769040
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARPGInvDrop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ARPGInvDrop_Statics

// ********** Begin Class ARPGInvDrop Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARPGInvDrop_Statics::NewProp_Inv = { "Inv", nullptr, (EPropertyFlags)0x01240800000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARPGInvDrop, Inv), Z_Construct_UClass_URPGInvChestComp_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inv_MetaData), NewProp_Inv_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARPGInvDrop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARPGInvDrop_Statics::NewProp_Inv,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGInvDrop_Statics::PropPointers) < 2048);
// ********** End Class ARPGInvDrop Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_ARPGInvDrop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGInvDrop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARPGInvDrop_Statics::ClassParams = {
	&ARPGInvDrop::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ARPGInvDrop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ARPGInvDrop_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARPGInvDrop_Statics::Class_MetaDataParams), Z_Construct_UClass_ARPGInvDrop_Statics::Class_MetaDataParams)
};
void ARPGInvDrop::StaticRegisterNativesARPGInvDrop()
{
	UClass* Class = ARPGInvDrop::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ARPGInvDrop_Statics::Funcs));
}
UClass* Z_Construct_UClass_ARPGInvDrop()
{
	if (!Z_Registration_Info_UClass_ARPGInvDrop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARPGInvDrop.OuterSingleton, Z_Construct_UClass_ARPGInvDrop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARPGInvDrop.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ARPGInvDrop);
ARPGInvDrop::~ARPGInvDrop() {}
// ********** End Class ARPGInvDrop ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h__Script_RPGInventoryRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARPGInvDrop, ARPGInvDrop::StaticClass, TEXT("ARPGInvDrop"), &Z_Registration_Info_UClass_ARPGInvDrop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARPGInvDrop), 2569221302U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h__Script_RPGInventoryRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h__Script_RPGInventoryRuntime_204927749{
	TEXT("/Script/RPGInventoryRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h__Script_RPGInventoryRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Actors_RPGInvDrop_h__Script_RPGInventoryRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
