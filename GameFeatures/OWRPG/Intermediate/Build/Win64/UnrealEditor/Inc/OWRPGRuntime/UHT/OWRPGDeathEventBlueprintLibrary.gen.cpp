// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OWRPGDeathEventBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOWRPGDeathEventBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary();
OWRPGRUNTIME_API UClass* Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OWRPGRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOWRPGDeathEventBlueprintLibrary Function SendDeathEvent *****************
struct Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics
{
	struct OWRPGDeathEventBlueprintLibrary_eventSendDeathEvent_Parms
	{
		AActor* DeadActor;
		AActor* InstigatorActor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OWRPG|Death" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Emits OWRPG.Event.Death as a GAS gameplay event to DeadActor.\n\x09 * Must be called on the server for authoritative gameplay.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OWRPGDeathEventBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Emits OWRPG.Event.Death as a GAS gameplay event to DeadActor.\nMust be called on the server for authoritative gameplay." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SendDeathEvent constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeadActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SendDeathEvent constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SendDeathEvent Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::NewProp_DeadActor = { "DeadActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWRPGDeathEventBlueprintLibrary_eventSendDeathEvent_Parms, DeadActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OWRPGDeathEventBlueprintLibrary_eventSendDeathEvent_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((OWRPGDeathEventBlueprintLibrary_eventSendDeathEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OWRPGDeathEventBlueprintLibrary_eventSendDeathEvent_Parms), &Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::NewProp_DeadActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::PropPointers) < 2048);
// ********** End Function SendDeathEvent Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary, nullptr, "SendDeathEvent", 	Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::OWRPGDeathEventBlueprintLibrary_eventSendDeathEvent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::OWRPGDeathEventBlueprintLibrary_eventSendDeathEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOWRPGDeathEventBlueprintLibrary::execSendDeathEvent)
{
	P_GET_OBJECT(AActor,Z_Param_DeadActor);
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UOWRPGDeathEventBlueprintLibrary::SendDeathEvent(Z_Param_DeadActor,Z_Param_InstigatorActor);
	P_NATIVE_END;
}
// ********** End Class UOWRPGDeathEventBlueprintLibrary Function SendDeathEvent *******************

// ********** Begin Class UOWRPGDeathEventBlueprintLibrary *****************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOWRPGDeathEventBlueprintLibrary;
UClass* UOWRPGDeathEventBlueprintLibrary::GetPrivateStaticClass()
{
	using TClass = UOWRPGDeathEventBlueprintLibrary;
	if (!Z_Registration_Info_UClass_UOWRPGDeathEventBlueprintLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OWRPGDeathEventBlueprintLibrary"),
			Z_Registration_Info_UClass_UOWRPGDeathEventBlueprintLibrary.InnerSingleton,
			StaticRegisterNativesUOWRPGDeathEventBlueprintLibrary,
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
	return Z_Registration_Info_UClass_UOWRPGDeathEventBlueprintLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_NoRegister()
{
	return UOWRPGDeathEventBlueprintLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "OWRPGDeathEventBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/OWRPGDeathEventBlueprintLibrary.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOWRPGDeathEventBlueprintLibrary constinit property declarations *********
// ********** End Class UOWRPGDeathEventBlueprintLibrary constinit property declarations ***********
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SendDeathEvent"), .Pointer = &UOWRPGDeathEventBlueprintLibrary::execSendDeathEvent },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOWRPGDeathEventBlueprintLibrary_SendDeathEvent, "SendDeathEvent" }, // 3970748303
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOWRPGDeathEventBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics
UObject* (*const Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OWRPGRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics::ClassParams = {
	&UOWRPGDeathEventBlueprintLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics::Class_MetaDataParams)
};
void UOWRPGDeathEventBlueprintLibrary::StaticRegisterNativesUOWRPGDeathEventBlueprintLibrary()
{
	UClass* Class = UOWRPGDeathEventBlueprintLibrary::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics::Funcs));
}
UClass* Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_UOWRPGDeathEventBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOWRPGDeathEventBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOWRPGDeathEventBlueprintLibrary.OuterSingleton;
}
UOWRPGDeathEventBlueprintLibrary::UOWRPGDeathEventBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOWRPGDeathEventBlueprintLibrary);
UOWRPGDeathEventBlueprintLibrary::~UOWRPGDeathEventBlueprintLibrary() {}
// ********** End Class UOWRPGDeathEventBlueprintLibrary *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_OWRPGDeathEventBlueprintLibrary_h__Script_OWRPGRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOWRPGDeathEventBlueprintLibrary, UOWRPGDeathEventBlueprintLibrary::StaticClass, TEXT("UOWRPGDeathEventBlueprintLibrary"), &Z_Registration_Info_UClass_UOWRPGDeathEventBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOWRPGDeathEventBlueprintLibrary), 101937143U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_OWRPGDeathEventBlueprintLibrary_h__Script_OWRPGRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_OWRPGDeathEventBlueprintLibrary_h__Script_OWRPGRuntime_3092574385{
	TEXT("/Script/OWRPGRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_OWRPGDeathEventBlueprintLibrary_h__Script_OWRPGRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_OWRPG_Source_OWRPGRuntime_Public_OWRPGDeathEventBlueprintLibrary_h__Script_OWRPGRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
