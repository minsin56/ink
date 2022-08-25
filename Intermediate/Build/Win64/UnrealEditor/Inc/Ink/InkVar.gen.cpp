// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Public/InkVar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkVar() {}
// Cross Module References
	INK_API UEnum* Z_Construct_UEnum_Ink_EInkVarType();
	UPackage* Z_Construct_UPackage__Script_Ink();
	INK_API UScriptStruct* Z_Construct_UScriptStruct_FInkVar();
	INK_API UClass* Z_Construct_UClass_UInkVarLibrary_NoRegister();
	INK_API UClass* Z_Construct_UClass_UInkVarLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInkVarType;
	static UEnum* EInkVarType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInkVarType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInkVarType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Ink_EInkVarType, Z_Construct_UPackage__Script_Ink(), TEXT("EInkVarType"));
		}
		return Z_Registration_Info_UEnum_EInkVarType.OuterSingleton;
	}
	template<> INK_API UEnum* StaticEnum<EInkVarType>()
	{
		return EInkVarType_StaticEnum();
	}
	struct Z_Construct_UEnum_Ink_EInkVarType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Ink_EInkVarType_Statics::Enumerators[] = {
		{ "EInkVarType::Float", (int64)EInkVarType::Float },
		{ "EInkVarType::Int", (int64)EInkVarType::Int },
		{ "EInkVarType::String", (int64)EInkVarType::String },
		{ "EInkVarType::None", (int64)EInkVarType::None },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Ink_EInkVarType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A wrapper for passing around ink vars to and fro ink itself\n// Not templated so it can be used in blueprints\n" },
		{ "Float.Name", "EInkVarType::Float" },
		{ "Int.Name", "EInkVarType::Int" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
		{ "None.Name", "EInkVarType::None" },
		{ "String.Name", "EInkVarType::String" },
		{ "ToolTip", "A wrapper for passing around ink vars to and fro ink itself\nNot templated so it can be used in blueprints" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Ink_EInkVarType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Ink,
		nullptr,
		"EInkVarType",
		"EInkVarType",
		Z_Construct_UEnum_Ink_EInkVarType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Ink_EInkVarType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Ink_EInkVarType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Ink_EInkVarType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Ink_EInkVarType()
	{
		if (!Z_Registration_Info_UEnum_EInkVarType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInkVarType.InnerSingleton, Z_Construct_UEnum_Ink_EInkVarType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInkVarType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InkVar;
class UScriptStruct* FInkVar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InkVar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InkVar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInkVar, Z_Construct_UPackage__Script_Ink(), TEXT("InkVar"));
	}
	return Z_Registration_Info_UScriptStruct_InkVar.OuterSingleton;
}
template<> INK_API UScriptStruct* StaticStruct<FInkVar>()
{
	return FInkVar::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInkVar_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floatVar_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floatVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_intVar_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_intVar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stringVar_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_stringVar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInkVar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInkVar>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_MetaData[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInkVar, type), Z_Construct_UEnum_Ink_EInkVarType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_MetaData)) }; // 2768743269
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar_MetaData[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar = { "floatVar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInkVar, floatVar), METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar_MetaData[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar = { "intVar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInkVar, intVar), METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar_MetaData[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar = { "stringVar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInkVar, stringVar), METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInkVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_floatVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_intVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInkVar_Statics::NewProp_stringVar,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInkVar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
		nullptr,
		&NewStructOps,
		"InkVar",
		sizeof(FInkVar),
		alignof(FInkVar),
		Z_Construct_UScriptStruct_FInkVar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInkVar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInkVar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInkVar()
	{
		if (!Z_Registration_Info_UScriptStruct_InkVar.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InkVar.InnerSingleton, Z_Construct_UScriptStruct_FInkVar_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InkVar.InnerSingleton;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_BoolInkVar)
	{
		P_GET_UBOOL(Z_Param_Boolean);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_BoolInkVar(Z_Param_Boolean);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_TextInkVar)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_TextInkVar(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_FloatInkVar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_FloatInkVar(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_IntInkVar)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Number);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_IntInkVar(Z_Param_Number);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_StringInkVar)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_String);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInkVar*)Z_Param__Result=UInkVarLibrary::Conv_StringInkVar(Z_Param_String);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarBool)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInkVarLibrary::Conv_InkVarBool(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarText)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=UInkVarLibrary::Conv_InkVarText(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarName)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=UInkVarLibrary::Conv_InkVarName(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarFloat)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UInkVarLibrary::Conv_InkVarFloat(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarInt)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInkVarLibrary::Conv_InkVarInt(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkVarLibrary::execConv_InkVarString)
	{
		P_GET_STRUCT_REF(FInkVar,Z_Param_Out_InkVar);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UInkVarLibrary::Conv_InkVarString(Z_Param_Out_InkVar);
		P_NATIVE_END;
	}
	void UInkVarLibrary::StaticRegisterNativesUInkVarLibrary()
	{
		UClass* Class = UInkVarLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Conv_BoolInkVar", &UInkVarLibrary::execConv_BoolInkVar },
			{ "Conv_FloatInkVar", &UInkVarLibrary::execConv_FloatInkVar },
			{ "Conv_InkVarBool", &UInkVarLibrary::execConv_InkVarBool },
			{ "Conv_InkVarFloat", &UInkVarLibrary::execConv_InkVarFloat },
			{ "Conv_InkVarInt", &UInkVarLibrary::execConv_InkVarInt },
			{ "Conv_InkVarName", &UInkVarLibrary::execConv_InkVarName },
			{ "Conv_InkVarString", &UInkVarLibrary::execConv_InkVarString },
			{ "Conv_InkVarText", &UInkVarLibrary::execConv_InkVarText },
			{ "Conv_IntInkVar", &UInkVarLibrary::execConv_IntInkVar },
			{ "Conv_StringInkVar", &UInkVarLibrary::execConv_StringInkVar },
			{ "Conv_TextInkVar", &UInkVarLibrary::execConv_TextInkVar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics
	{
		struct InkVarLibrary_eventConv_BoolInkVar_Parms
		{
			bool Boolean;
			FInkVar ReturnValue;
		};
		static void NewProp_Boolean_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Boolean;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_Boolean_SetBit(void* Obj)
	{
		((InkVarLibrary_eventConv_BoolInkVar_Parms*)Obj)->Boolean = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_Boolean = { "Boolean", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InkVarLibrary_eventConv_BoolInkVar_Parms), &Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_Boolean_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_BoolInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) }; // 178155116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_Boolean,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (Bool)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_BoolInkVar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::InkVarLibrary_eventConv_BoolInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics
	{
		struct InkVarLibrary_eventConv_FloatInkVar_Parms
		{
			float Number;
			FInkVar ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Number;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_FloatInkVar_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_FloatInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) }; // 178155116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (Float)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_FloatInkVar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::InkVarLibrary_eventConv_FloatInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics
	{
		struct InkVarLibrary_eventConv_InkVarBool_Parms
		{
			FInkVar InkVar;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarBool_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar_MetaData)) }; // 178155116
	void Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InkVarLibrary_eventConv_InkVarBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InkVarLibrary_eventConv_InkVarBool_Parms), &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_InkVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Bool (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::InkVarLibrary_eventConv_InkVarBool_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics
	{
		struct InkVarLibrary_eventConv_InkVarFloat_Parms
		{
			FInkVar InkVar;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarFloat_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar_MetaData)) }; // 178155116
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_InkVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Float (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::InkVarLibrary_eventConv_InkVarFloat_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics
	{
		struct InkVarLibrary_eventConv_InkVarInt_Parms
		{
			FInkVar InkVar;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarInt_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar_MetaData)) }; // 178155116
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_InkVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Int (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::InkVarLibrary_eventConv_InkVarInt_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics
	{
		struct InkVarLibrary_eventConv_InkVarName_Parms
		{
			FInkVar InkVar;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarName_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar_MetaData)) }; // 178155116
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_InkVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Name (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::InkVarLibrary_eventConv_InkVarName_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics
	{
		struct InkVarLibrary_eventConv_InkVarString_Parms
		{
			FInkVar InkVar;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarString_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar_MetaData)) }; // 178155116
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_InkVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "String (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::InkVarLibrary_eventConv_InkVarString_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics
	{
		struct InkVarLibrary_eventConv_InkVarText_Parms
		{
			FInkVar InkVar;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InkVar_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InkVar;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar = { "InkVar", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarText_Parms, InkVar), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar_MetaData)) }; // 178155116
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_InkVarText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_InkVar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Text (Ink Var)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_InkVarText", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::InkVarLibrary_eventConv_InkVarText_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics
	{
		struct InkVarLibrary_eventConv_IntInkVar_Parms
		{
			int32 Number;
			FInkVar ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Number;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_IntInkVar_Parms, Number), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_IntInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) }; // 178155116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::NewProp_Number,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (Int)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_IntInkVar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::InkVarLibrary_eventConv_IntInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics
	{
		struct InkVarLibrary_eventConv_StringInkVar_Parms
		{
			FString String;
			FInkVar ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_String_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_String;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String = { "String", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_StringInkVar_Parms, String), METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_StringInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) }; // 178155116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_String,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (String)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_StringInkVar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::InkVarLibrary_eventConv_StringInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics
	{
		struct InkVarLibrary_eventConv_TextInkVar_Parms
		{
			FText Text;
			FInkVar ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_TextInkVar_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkVarLibrary_eventConv_TextInkVar_Parms, ReturnValue), Z_Construct_UScriptStruct_FInkVar, METADATA_PARAMS(nullptr, 0) }; // 178155116
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "Ink" },
		{ "CompactNodeTitle", "->" },
		{ "DisplayName", "Ink Var (Text)" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkVarLibrary, nullptr, "Conv_TextInkVar", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::InkVarLibrary_eventConv_TextInkVar_Parms), Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkVarLibrary);
	UClass* Z_Construct_UClass_UInkVarLibrary_NoRegister()
	{
		return UInkVarLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UInkVarLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkVarLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInkVarLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_BoolInkVar, "Conv_BoolInkVar" }, // 2544640413
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_FloatInkVar, "Conv_FloatInkVar" }, // 683826721
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarBool, "Conv_InkVarBool" }, // 4256792669
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarFloat, "Conv_InkVarFloat" }, // 1615400009
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarInt, "Conv_InkVarInt" }, // 2925097597
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarName, "Conv_InkVarName" }, // 3298982032
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarString, "Conv_InkVarString" }, // 2274194806
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_InkVarText, "Conv_InkVarText" }, // 1076207961
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_IntInkVar, "Conv_IntInkVar" }, // 3304412331
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_StringInkVar, "Conv_StringInkVar" }, // 3439721945
		{ &Z_Construct_UFunction_UInkVarLibrary_Conv_TextInkVar, "Conv_TextInkVar" }, // 216646005
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkVarLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InkVar.h" },
		{ "ModuleRelativePath", "Public/InkVar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkVarLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkVarLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkVarLibrary_Statics::ClassParams = {
		&UInkVarLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInkVarLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInkVarLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInkVarLibrary()
	{
		if (!Z_Registration_Info_UClass_UInkVarLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkVarLibrary.OuterSingleton, Z_Construct_UClass_UInkVarLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkVarLibrary.OuterSingleton;
	}
	template<> INK_API UClass* StaticClass<UInkVarLibrary>()
	{
		return UInkVarLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkVarLibrary);
	struct Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::EnumInfo[] = {
		{ EInkVarType_StaticEnum, TEXT("EInkVarType"), &Z_Registration_Info_UEnum_EInkVarType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2768743269U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::ScriptStructInfo[] = {
		{ FInkVar::StaticStruct, Z_Construct_UScriptStruct_FInkVar_Statics::NewStructOps, TEXT("InkVar"), &Z_Registration_Info_UScriptStruct_InkVar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInkVar), 178155116U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkVarLibrary, UInkVarLibrary::StaticClass, TEXT("UInkVarLibrary"), &Z_Registration_Info_UClass_UInkVarLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkVarLibrary), 2235992210U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_2247781665(TEXT("/Script/Ink"),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkVar_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
