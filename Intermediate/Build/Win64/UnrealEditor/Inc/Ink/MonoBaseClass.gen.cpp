// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Ink/Private/MonoBaseClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonoBaseClass() {}
// Cross Module References
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass_NoRegister();
	INK_API UClass* Z_Construct_UClass_UMonoBaseClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Ink();
// End Cross Module References
	void UMonoBaseClass::StaticRegisterNativesUMonoBaseClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMonoBaseClass);
	UClass* Z_Construct_UClass_UMonoBaseClass_NoRegister()
	{
		return UMonoBaseClass::StaticClass();
	}
	struct Z_Construct_UClass_UMonoBaseClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonoBaseClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Ink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonoBaseClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonoBaseClass.h" },
		{ "ModuleRelativePath", "Private/MonoBaseClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonoBaseClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonoBaseClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMonoBaseClass_Statics::ClassParams = {
		&UMonoBaseClass::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMonoBaseClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonoBaseClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonoBaseClass()
	{
		if (!Z_Registration_Info_UClass_UMonoBaseClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMonoBaseClass.OuterSingleton, Z_Construct_UClass_UMonoBaseClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMonoBaseClass.OuterSingleton;
	}
	template<> INK_API UClass* StaticClass<UMonoBaseClass>()
	{
		return UMonoBaseClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonoBaseClass);
	struct Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Private_MonoBaseClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Private_MonoBaseClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMonoBaseClass, UMonoBaseClass::StaticClass, TEXT("UMonoBaseClass"), &Z_Registration_Info_UClass_UMonoBaseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMonoBaseClass), 786193484U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Private_MonoBaseClass_h_3312895482(TEXT("/Script/Ink"),
		Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Private_MonoBaseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_FishGame_Plugins_Ink_Source_Ink_Private_MonoBaseClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
