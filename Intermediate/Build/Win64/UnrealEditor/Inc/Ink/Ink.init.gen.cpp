// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInk_init() {}
	INK_API UFunction* Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Ink;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Ink()
	{
		if (!Z_Registration_Info_UPackage__Script_Ink.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Ink_VariableObserver__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Ink",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1B39973A,
				0xCE9692ED,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Ink.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Ink.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Ink(Z_Construct_UPackage__Script_Ink, TEXT("/Script/Ink"), Z_Registration_Info_UPackage__Script_Ink, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1B39973A, 0xCE9692ED));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
