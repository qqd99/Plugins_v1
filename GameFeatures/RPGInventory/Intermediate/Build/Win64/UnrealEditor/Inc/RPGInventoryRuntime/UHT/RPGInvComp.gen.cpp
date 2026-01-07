// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Inv/RPGInvComp.h"
#include "Inv/RPGInvTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeRPGInvComp() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvComp();
RPGINVENTORYRUNTIME_API UClass* Z_Construct_UClass_URPGInvComp_NoRegister();
RPGINVENTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInvItem();
RPGINVENTORYRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRPGInvList();
UPackage* Z_Construct_UPackage__Script_RPGInventoryRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class URPGInvComp Function GetHeight *******************************************
struct Z_Construct_UFunction_URPGInvComp_GetHeight_Statics
{
	struct RPGInvComp_eventGetHeight_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGInv" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvComp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetHeight constinit property declarations *****************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetHeight constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetHeight Property Definitions ****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInvComp_eventGetHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::PropPointers) < 2048);
// ********** End Function GetHeight Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInvComp, nullptr, "GetHeight", 	Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::RPGInvComp_eventGetHeight_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::RPGInvComp_eventGetHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInvComp_GetHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInvComp_GetHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInvComp::execGetHeight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHeight();
	P_NATIVE_END;
}
// ********** End Class URPGInvComp Function GetHeight *********************************************

// ********** Begin Class URPGInvComp Function GetItems ********************************************
struct Z_Construct_UFunction_URPGInvComp_GetItems_Statics
{
	struct RPGInvComp_eventGetItems_Parms
	{
		TArray<FRPGInvItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGInv" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetItems constinit property declarations ******************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetItems constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetItems Property Definitions *****************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URPGInvComp_GetItems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRPGInvItem, METADATA_PARAMS(0, nullptr) }; // 2541665473
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URPGInvComp_GetItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInvComp_eventGetItems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2541665473
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInvComp_GetItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInvComp_GetItems_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInvComp_GetItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetItems_Statics::PropPointers) < 2048);
// ********** End Function GetItems Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInvComp_GetItems_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInvComp, nullptr, "GetItems", 	Z_Construct_UFunction_URPGInvComp_GetItems_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetItems_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URPGInvComp_GetItems_Statics::RPGInvComp_eventGetItems_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInvComp_GetItems_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInvComp_GetItems_Statics::RPGInvComp_eventGetItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInvComp_GetItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInvComp_GetItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInvComp::execGetItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FRPGInvItem>*)Z_Param__Result=P_THIS->GetItems();
	P_NATIVE_END;
}
// ********** End Class URPGInvComp Function GetItems **********************************************

// ********** Begin Class URPGInvComp Function GetSlotCount ****************************************
struct Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics
{
	struct RPGInvComp_eventGetSlotCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGInv" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvComp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSlotCount constinit property declarations **************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSlotCount constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSlotCount Property Definitions *************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInvComp_eventGetSlotCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::PropPointers) < 2048);
// ********** End Function GetSlotCount Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInvComp, nullptr, "GetSlotCount", 	Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::RPGInvComp_eventGetSlotCount_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::RPGInvComp_eventGetSlotCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInvComp_GetSlotCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInvComp_GetSlotCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInvComp::execGetSlotCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSlotCount();
	P_NATIVE_END;
}
// ********** End Class URPGInvComp Function GetSlotCount ******************************************

// ********** Begin Class URPGInvComp Function GetWidth ********************************************
struct Z_Construct_UFunction_URPGInvComp_GetWidth_Statics
{
	struct RPGInvComp_eventGetWidth_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RPGInv" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvComp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWidth constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWidth constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWidth Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RPGInvComp_eventGetWidth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::PropPointers) < 2048);
// ********** End Function GetWidth Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_URPGInvComp, nullptr, "GetWidth", 	Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::RPGInvComp_eventGetWidth_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::RPGInvComp_eventGetWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URPGInvComp_GetWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URPGInvComp_GetWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URPGInvComp::execGetWidth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWidth();
	P_NATIVE_END;
}
// ********** End Class URPGInvComp Function GetWidth **********************************************

// ********** Begin Class URPGInvComp **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_URPGInvComp;
UClass* URPGInvComp::GetPrivateStaticClass()
{
	using TClass = URPGInvComp;
	if (!Z_Registration_Info_UClass_URPGInvComp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("RPGInvComp"),
			Z_Registration_Info_UClass_URPGInvComp.InnerSingleton,
			StaticRegisterNativesURPGInvComp,
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
	return Z_Registration_Info_UClass_URPGInvComp.InnerSingleton;
}
UClass* Z_Construct_UClass_URPGInvComp_NoRegister()
{
	return URPGInvComp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_URPGInvComp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Inv/RPGInvComp.h" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "RPGInv" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "RPGInv" },
		{ "ModuleRelativePath", "Public/Inv/RPGInvComp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_List_MetaData[] = {
		{ "ModuleRelativePath", "Public/Inv/RPGInvComp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class URPGInvComp constinit property declarations ******************************
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_List;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class URPGInvComp constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetHeight"), .Pointer = &URPGInvComp::execGetHeight },
		{ .NameUTF8 = UTF8TEXT("GetItems"), .Pointer = &URPGInvComp::execGetItems },
		{ .NameUTF8 = UTF8TEXT("GetSlotCount"), .Pointer = &URPGInvComp::execGetSlotCount },
		{ .NameUTF8 = UTF8TEXT("GetWidth"), .Pointer = &URPGInvComp::execGetWidth },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URPGInvComp_GetHeight, "GetHeight" }, // 700800043
		{ &Z_Construct_UFunction_URPGInvComp_GetItems, "GetItems" }, // 3351752511
		{ &Z_Construct_UFunction_URPGInvComp_GetSlotCount, "GetSlotCount" }, // 3516147766
		{ &Z_Construct_UFunction_URPGInvComp_GetWidth, "GetWidth" }, // 1319464670
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGInvComp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_URPGInvComp_Statics

// ********** Begin Class URPGInvComp Property Definitions *****************************************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGInvComp_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInvComp, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URPGInvComp_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInvComp, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URPGInvComp_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0020088000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URPGInvComp, List), Z_Construct_UScriptStruct_FRPGInvList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_List_MetaData), NewProp_List_MetaData) }; // 4143411524
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URPGInvComp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInvComp_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInvComp_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URPGInvComp_Statics::NewProp_List,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvComp_Statics::PropPointers) < 2048);
// ********** End Class URPGInvComp Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_URPGInvComp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_RPGInventoryRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvComp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGInvComp_Statics::ClassParams = {
	&URPGInvComp::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URPGInvComp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvComp_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URPGInvComp_Statics::Class_MetaDataParams), Z_Construct_UClass_URPGInvComp_Statics::Class_MetaDataParams)
};
void URPGInvComp::StaticRegisterNativesURPGInvComp()
{
	UClass* Class = URPGInvComp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_URPGInvComp_Statics::Funcs));
}
UClass* Z_Construct_UClass_URPGInvComp()
{
	if (!Z_Registration_Info_UClass_URPGInvComp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGInvComp.OuterSingleton, Z_Construct_UClass_URPGInvComp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URPGInvComp.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void URPGInvComp::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_List(TEXT("List"));
	const bool bIsValid = true
		&& Name_List == ClassReps[(int32)ENetFields_Private::List].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in URPGInvComp"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, URPGInvComp);
URPGInvComp::~URPGInvComp() {}
// ********** End Class URPGInvComp ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h__Script_RPGInventoryRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URPGInvComp, URPGInvComp::StaticClass, TEXT("URPGInvComp"), &Z_Registration_Info_UClass_URPGInvComp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGInvComp), 491890519U) },
	};
}; // Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h__Script_RPGInventoryRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h__Script_RPGInventoryRuntime_4239986006{
	TEXT("/Script/RPGInventoryRuntime"),
	Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h__Script_RPGInventoryRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_P251210_Plugins_GameFeatures_RPGInventory_Source_RPGInventoryRuntime_Public_Inv_RPGInvComp_h__Script_RPGInventoryRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
