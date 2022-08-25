// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Public/VariablesState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariablesState() {}
// Cross Module References
	INK_API UClass* Z_Construct_UClass_UVariablesState_NoRegister();
	INK_API UClass* Z_Construct_UClass_UVariablesState();
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass();
	UPackage* Z_Construct_UPackage__Script_Ink();
	INK_API UScriptStruct* Z_Construct_UScriptStruct_FInkVar();
// End Cross Module References
	DEFINE_FUNCTION(UVariablesState::execSetVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariable(Z_Param_variableName,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execSetVariableString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableString(Z_Param_variableName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execSetVariableInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableInt(Z_Param_variableName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execSetVariableFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVariableFloat(Z_Param_variableName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execGetVariable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_variableName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=P_THIS->GetVariable(Z_Param_variableName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariablesState::execGetVariables)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetVariables();
		P_NATIVE_END;
	}
	void UVariablesState::StaticRegisterNativesUVariablesState()
	{
		UClass* Class = UVariablesState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVariable", &UVariablesState::execGetVariable },
			{ "GetVariables", &UVariablesState::execGetVariables },
			{ "SetVariable", &UVariablesState::execSetVariable },
			{ "SetVariableFloat", &UVariablesState::execSetVariableFloat },
			{ "SetVariableInt", &UVariablesState::execSetVariableInt },
			{ "SetVariableString", &UVariablesState::execSetVariableString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariablesState_GetVariable_Statics
	{
		struct VariablesState_eventGetVariable_Parms
		{
			FString variableName;
			FInkVar ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_variableName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventGetVariable_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventGetVariable_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) }; // 178155116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_GetVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_variableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_GetVariable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_GetVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_GetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "GetVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::VariablesState_eventGetVariable_Parms), Z_Construct_UFunction_UVariablesState_GetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_GetVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariablesState_GetVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_GetVariables_Statics
	{
		struct VariablesState_eventGetVariables_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_GetVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVariablesState_GetVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventGetVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_GetVariables_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_GetVariables_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_GetVariables_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_GetVariables_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_GetVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "GetVariables", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariablesState_GetVariables_Statics::VariablesState_eventGetVariables_Parms), Z_Construct_UFunction_UVariablesState_GetVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariables_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_GetVariables_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_GetVariables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_GetVariables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariablesState_GetVariables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_SetVariable_Statics
	{
		struct VariablesState_eventSetVariable_Parms
		{
			FString variableName;
			FInkVar value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_variableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariable_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariable_Parms, value), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value_MetaData)) }; // 178155116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_SetVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_variableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariable_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariable_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_SetVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "SetVariable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::VariablesState_eventSetVariable_Parms), Z_Construct_UFunction_UVariablesState_SetVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_SetVariable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariablesState_SetVariable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics
	{
		struct VariablesState_eventSetVariableFloat_Parms
		{
			FString variableName;
			float value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_variableName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableFloat_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_variableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "SetVariableFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::VariablesState_eventSetVariableFloat_Parms), Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_SetVariableFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariablesState_SetVariableFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics
	{
		struct VariablesState_eventSetVariableInt_Parms
		{
			FString variableName;
			int32 value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_variableName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableInt_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_variableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "SetVariableInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::VariablesState_eventSetVariableInt_Parms), Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_SetVariableInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariablesState_SetVariableInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariablesState_SetVariableString_Statics
	{
		struct VariablesState_eventSetVariableString_Parms
		{
			FString variableName;
			FString value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_variableName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_variableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName = { "variableName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableString_Parms, variableName), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VariablesState_eventSetVariableString_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_variableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariablesState, nullptr, "SetVariableString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::VariablesState_eventSetVariableString_Parms), Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariablesState_SetVariableString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariablesState_SetVariableString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariablesState);
	UClass* Z_Construct_UClass_UVariablesState_NoRegister()
	{
		return UVariablesState::StaticClass();
	}
	struct Z_Construct_UClass_UVariablesState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariablesState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonoBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariablesState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariablesState_GetVariable, "GetVariable" }, // 3909871182
		{ &Z_Construct_UFunction_UVariablesState_GetVariables, "GetVariables" }, // 3263392368
		{ &Z_Construct_UFunction_UVariablesState_SetVariable, "SetVariable" }, // 831933884
		{ &Z_Construct_UFunction_UVariablesState_SetVariableFloat, "SetVariableFloat" }, // 2847628493
		{ &Z_Construct_UFunction_UVariablesState_SetVariableInt, "SetVariableInt" }, // 1132367843
		{ &Z_Construct_UFunction_UVariablesState_SetVariableString, "SetVariableString" }, // 2363324168
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariablesState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VariablesState.h" },
		{ "ModuleRelativePath", "Public/VariablesState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariablesState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariablesState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariablesState_Statics::ClassParams = {
		&UVariablesState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVariablesState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariablesState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariablesState()
	{
		if (!Z_Registration_Info_UClass_UVariablesState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariablesState.OuterSingleton, Z_Construct_UClass_UVariablesState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVariablesState.OuterSingleton;
	}
	template<> INK_API UClass* StaticClass<UVariablesState>()
	{
		return UVariablesState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariablesState);
	struct Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_VariablesState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_VariablesState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVariablesState, UVariablesState::StaticClass, TEXT("UVariablesState"), &Z_Registration_Info_UClass_UVariablesState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariablesState), 3845927894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_VariablesState_h_863564247(TEXT("/Script/Ink"),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_VariablesState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_VariablesState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
