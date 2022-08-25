// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InkEditor/Private/StoryAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoryAssetFactory() {}
// Cross Module References
	INKEDITOR_API UClass* Z_Construct_UClass_UStoryAssetFactory_NoRegister();
	INKEDITOR_API UClass* Z_Construct_UClass_UStoryAssetFactory();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_InkEditor();
// End Cross Module References
	void UStoryAssetFactory::StaticRegisterNativesUStoryAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStoryAssetFactory);
	UClass* Z_Construct_UClass_UStoryAssetFactory_NoRegister()
	{
		return UStoryAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStoryAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStoryAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InkEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStoryAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "StoryAssetFactory.h" },
		{ "ModuleRelativePath", "Private/StoryAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStoryAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStoryAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStoryAssetFactory_Statics::ClassParams = {
		&UStoryAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStoryAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStoryAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStoryAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UStoryAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStoryAssetFactory.OuterSingleton, Z_Construct_UClass_UStoryAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStoryAssetFactory.OuterSingleton;
	}
	template<> INKEDITOR_API UClass* StaticClass<UStoryAssetFactory>()
	{
		return UStoryAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStoryAssetFactory);
	struct Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_InkEditor_Private_StoryAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_InkEditor_Private_StoryAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStoryAssetFactory, UStoryAssetFactory::StaticClass, TEXT("UStoryAssetFactory"), &Z_Registration_Info_UClass_UStoryAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStoryAssetFactory), 3940617929U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_InkEditor_Private_StoryAssetFactory_h_4136420875(TEXT("/Script/InkEditor"),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_InkEditor_Private_StoryAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_InkEditor_Private_StoryAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
