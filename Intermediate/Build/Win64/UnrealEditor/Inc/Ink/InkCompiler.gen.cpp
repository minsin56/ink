// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Public/InkCompiler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkCompiler() {}
// Cross Module References
	INK_API UClass* Z_Construct_UClass_UInkCompiler_NoRegister();
	INK_API UClass* Z_Construct_UClass_UInkCompiler();
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass();
	UPackage* Z_Construct_UPackage__Script_Ink();
// End Cross Module References
	DEFINE_FUNCTION(UInkCompiler::execCompileToJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->CompileToJson();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkCompiler::execGetAuthorMessages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAuthorMessages();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkCompiler::execGetWarnings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetWarnings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInkCompiler::execGetErrors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetErrors();
		P_NATIVE_END;
	}
	void UInkCompiler::StaticRegisterNativesUInkCompiler()
	{
		UClass* Class = UInkCompiler::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompileToJson", &UInkCompiler::execCompileToJson },
			{ "GetAuthorMessages", &UInkCompiler::execGetAuthorMessages },
			{ "GetErrors", &UInkCompiler::execGetErrors },
			{ "GetWarnings", &UInkCompiler::execGetWarnings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics
	{
		struct InkCompiler_eventCompileToJson_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkCompiler_eventCompileToJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InkCompiler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkCompiler, nullptr, "CompileToJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::InkCompiler_eventCompileToJson_Parms), Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkCompiler_CompileToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkCompiler_CompileToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics
	{
		struct InkCompiler_eventGetAuthorMessages_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkCompiler_eventGetAuthorMessages_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InkCompiler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkCompiler, nullptr, "GetAuthorMessages", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::InkCompiler_eventGetAuthorMessages_Parms), Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkCompiler_GetAuthorMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkCompiler_GetAuthorMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkCompiler_GetErrors_Statics
	{
		struct InkCompiler_eventGetErrors_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkCompiler_eventGetErrors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InkCompiler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkCompiler, nullptr, "GetErrors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::InkCompiler_eventGetErrors_Parms), Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkCompiler_GetErrors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkCompiler_GetErrors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics
	{
		struct InkCompiler_eventGetWarnings_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InkCompiler_eventGetWarnings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InkCompiler.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInkCompiler, nullptr, "GetWarnings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::InkCompiler_eventGetWarnings_Parms), Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInkCompiler_GetWarnings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInkCompiler_GetWarnings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInkCompiler);
	UClass* Z_Construct_UClass_UInkCompiler_NoRegister()
	{
		return UInkCompiler::StaticClass();
	}
	struct Z_Construct_UClass_UInkCompiler_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInkCompiler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonoBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInkCompiler_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInkCompiler_CompileToJson, "CompileToJson" }, // 978177103
		{ &Z_Construct_UFunction_UInkCompiler_GetAuthorMessages, "GetAuthorMessages" }, // 4064348556
		{ &Z_Construct_UFunction_UInkCompiler_GetErrors, "GetErrors" }, // 696939654
		{ &Z_Construct_UFunction_UInkCompiler_GetWarnings, "GetWarnings" }, // 4034161076
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInkCompiler_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "InkCompiler.h" },
		{ "ModuleRelativePath", "Public/InkCompiler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInkCompiler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInkCompiler>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInkCompiler_Statics::ClassParams = {
		&UInkCompiler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInkCompiler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInkCompiler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInkCompiler()
	{
		if (!Z_Registration_Info_UClass_UInkCompiler.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInkCompiler.OuterSingleton, Z_Construct_UClass_UInkCompiler_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInkCompiler.OuterSingleton;
	}
	template<> INK_API UClass* StaticClass<UInkCompiler>()
	{
		return UInkCompiler::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInkCompiler);
	struct Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInkCompiler, UInkCompiler::StaticClass, TEXT("UInkCompiler"), &Z_Registration_Info_UClass_UInkCompiler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInkCompiler), 3778212125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_311597468(TEXT("/Script/Ink"),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
