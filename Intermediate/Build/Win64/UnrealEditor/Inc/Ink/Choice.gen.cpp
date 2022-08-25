// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Public/Choice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChoice() {}
// Cross Module References
	INK_API UClass* Z_Construct_UClass_UChoice_NoRegister();
	INK_API UClass* Z_Construct_UClass_UChoice();
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass();
	UPackage* Z_Construct_UPackage__Script_Ink();
// End Cross Module References
	DEFINE_FUNCTION(UChoice::execIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Index();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChoice::execSourcePath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->SourcePath();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChoice::execPathStringOnChoice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->PathStringOnChoice();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UChoice::execText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Text();
		P_NATIVE_END;
	}
	void UChoice::StaticRegisterNativesUChoice()
	{
		UClass* Class = UChoice::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Index", &UChoice::execIndex },
			{ "PathStringOnChoice", &UChoice::execPathStringOnChoice },
			{ "SourcePath", &UChoice::execSourcePath },
			{ "Text", &UChoice::execText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UChoice_Index_Statics
	{
		struct Choice_eventIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UChoice_Index_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Choice_eventIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChoice_Index_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChoice_Index_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChoice_Index_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Choice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChoice_Index_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChoice, nullptr, "Index", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChoice_Index_Statics::Choice_eventIndex_Parms), Z_Construct_UFunction_UChoice_Index_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoice_Index_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChoice_Index_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoice_Index_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChoice_Index()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChoice_Index_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics
	{
		struct Choice_eventPathStringOnChoice_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Choice_eventPathStringOnChoice_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Choice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChoice, nullptr, "PathStringOnChoice", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::Choice_eventPathStringOnChoice_Parms), Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChoice_PathStringOnChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChoice_PathStringOnChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChoice_SourcePath_Statics
	{
		struct Choice_eventSourcePath_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChoice_SourcePath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Choice_eventSourcePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChoice_SourcePath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChoice_SourcePath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChoice_SourcePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Choice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChoice_SourcePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChoice, nullptr, "SourcePath", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChoice_SourcePath_Statics::Choice_eventSourcePath_Parms), Z_Construct_UFunction_UChoice_SourcePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoice_SourcePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChoice_SourcePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoice_SourcePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChoice_SourcePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChoice_SourcePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UChoice_Text_Statics
	{
		struct Choice_eventText_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UChoice_Text_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Choice_eventText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UChoice_Text_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UChoice_Text_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UChoice_Text_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/Choice.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UChoice_Text_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UChoice, nullptr, "Text", nullptr, nullptr, sizeof(Z_Construct_UFunction_UChoice_Text_Statics::Choice_eventText_Parms), Z_Construct_UFunction_UChoice_Text_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoice_Text_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UChoice_Text_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UChoice_Text_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UChoice_Text()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UChoice_Text_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UChoice);
	UClass* Z_Construct_UClass_UChoice_NoRegister()
	{
		return UChoice::StaticClass();
	}
	struct Z_Construct_UClass_UChoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UChoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonoBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UChoice_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UChoice_Index, "Index" }, // 640661002
		{ &Z_Construct_UFunction_UChoice_PathStringOnChoice, "PathStringOnChoice" }, // 1507984041
		{ &Z_Construct_UFunction_UChoice_SourcePath, "SourcePath" }, // 3906943506
		{ &Z_Construct_UFunction_UChoice_Text, "Text" }, // 3398235406
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UChoice_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Choice.h" },
		{ "ModuleRelativePath", "Public/Choice.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UChoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UChoice>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UChoice_Statics::ClassParams = {
		&UChoice::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UChoice_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UChoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UChoice()
	{
		if (!Z_Registration_Info_UClass_UChoice.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UChoice.OuterSingleton, Z_Construct_UClass_UChoice_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UChoice.OuterSingleton;
	}
	template<> INK_API UClass* StaticClass<UChoice>()
	{
		return UChoice::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UChoice);
	struct Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UChoice, UChoice::StaticClass, TEXT("UChoice"), &Z_Registration_Info_UClass_UChoice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UChoice), 1310161913U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_3379212152(TEXT("/Script/Ink"),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
