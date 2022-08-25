// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Public/StoryState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryState() {}
// Cross Module References
	INK_API UClass* Z_Construct_UClass_UStoryState_NoRegister();
	INK_API UClass* Z_Construct_UClass_UStoryState();
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass();
	UPackage* Z_Construct_UPackage__Script_Ink();
// End Cross Module References
	DEFINE_FUNCTION(UStoryState::execForceEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoryState::execCurrentPathString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->CurrentPathString();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoryState::execVisitCountAtPathString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PathString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->VisitCountAtPathString(Z_Param_PathString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoryState::execLoadJson)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadJson(Z_Param_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoryState::execToJson)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ToJson();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStoryState::execInkSaveStateVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->InkSaveStateVersion();
		P_NATIVE_END;
	}
	void UStoryState::StaticRegisterNativesUStoryState()
	{
		UClass* Class = UStoryState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CurrentPathString", &UStoryState::execCurrentPathString },
			{ "ForceEnd", &UStoryState::execForceEnd },
			{ "InkSaveStateVersion", &UStoryState::execInkSaveStateVersion },
			{ "LoadJson", &UStoryState::execLoadJson },
			{ "ToJson", &UStoryState::execToJson },
			{ "VisitCountAtPathString", &UStoryState::execVisitCountAtPathString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStoryState_CurrentPathString_Statics
	{
		struct StoryState_eventCurrentPathString_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoryState_eventCurrentPathString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/StoryState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoryState, nullptr, "CurrentPathString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::StoryState_eventCurrentPathString_Parms), Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoryState_CurrentPathString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoryState_CurrentPathString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoryState_ForceEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoryState_ForceEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/StoryState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoryState_ForceEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoryState, nullptr, "ForceEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoryState_ForceEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_ForceEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoryState_ForceEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoryState_ForceEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics
	{
		struct StoryState_eventInkSaveStateVersion_Parms
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
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoryState_eventInkSaveStateVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/StoryState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoryState, nullptr, "InkSaveStateVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::StoryState_eventInkSaveStateVersion_Parms), Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoryState_InkSaveStateVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoryState_InkSaveStateVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoryState_LoadJson_Statics
	{
		struct StoryState_eventLoadJson_Parms
		{
			FString Json;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoryState_LoadJson_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoryState_eventLoadJson_Parms, Json), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoryState_LoadJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoryState_LoadJson_Statics::NewProp_Json,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoryState_LoadJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/StoryState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoryState_LoadJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoryState, nullptr, "LoadJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStoryState_LoadJson_Statics::StoryState_eventLoadJson_Parms), Z_Construct_UFunction_UStoryState_LoadJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_LoadJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoryState_LoadJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_LoadJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoryState_LoadJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoryState_LoadJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoryState_ToJson_Statics
	{
		struct StoryState_eventToJson_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoryState_ToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoryState_eventToJson_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoryState_ToJson_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoryState_ToJson_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoryState_ToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/StoryState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoryState_ToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoryState, nullptr, "ToJson", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStoryState_ToJson_Statics::StoryState_eventToJson_Parms), Z_Construct_UFunction_UStoryState_ToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_ToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoryState_ToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_ToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoryState_ToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoryState_ToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics
	{
		struct StoryState_eventVisitCountAtPathString_Parms
		{
			FString PathString;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_PathString;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::NewProp_PathString = { "PathString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoryState_eventVisitCountAtPathString_Parms, PathString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StoryState_eventVisitCountAtPathString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::NewProp_PathString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ink" },
		{ "ModuleRelativePath", "Public/StoryState.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStoryState, nullptr, "VisitCountAtPathString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::StoryState_eventVisitCountAtPathString_Parms), Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStoryState_VisitCountAtPathString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStoryState_VisitCountAtPathString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStoryState);
	UClass* Z_Construct_UClass_UStoryState_NoRegister()
	{
		return UStoryState::StaticClass();
	}
	struct Z_Construct_UClass_UStoryState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoryState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonoBaseClass,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStoryState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStoryState_CurrentPathString, "CurrentPathString" }, // 3004519650
		{ &Z_Construct_UFunction_UStoryState_ForceEnd, "ForceEnd" }, // 3319129559
		{ &Z_Construct_UFunction_UStoryState_InkSaveStateVersion, "InkSaveStateVersion" }, // 323711030
		{ &Z_Construct_UFunction_UStoryState_LoadJson, "LoadJson" }, // 347021744
		{ &Z_Construct_UFunction_UStoryState_ToJson, "ToJson" }, // 3019726810
		{ &Z_Construct_UFunction_UStoryState_VisitCountAtPathString, "VisitCountAtPathString" }, // 570916735
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "StoryState.h" },
		{ "ModuleRelativePath", "Public/StoryState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoryState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoryState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStoryState_Statics::ClassParams = {
		&UStoryState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStoryState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoryState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoryState()
	{
		if (!Z_Registration_Info_UClass_UStoryState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStoryState.OuterSingleton, Z_Construct_UClass_UStoryState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStoryState.OuterSingleton;
	}
	template<> INK_API UClass* StaticClass<UStoryState>()
	{
		return UStoryState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoryState);
	struct Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStoryState, UStoryState::StaticClass, TEXT("UStoryState"), &Z_Registration_Info_UClass_UStoryState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStoryState), 85692273U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_2502260282(TEXT("/Script/Ink"),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
