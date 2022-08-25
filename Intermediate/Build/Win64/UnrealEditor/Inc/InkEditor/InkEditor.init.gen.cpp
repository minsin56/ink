// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInkEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InkEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InkEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_InkEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InkEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0x826F4258,
				0xE1ABB234,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InkEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InkEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InkEditor(Z_Construct_UPackage__Script_InkEditor, TEXT("/Script/InkEditor"), Z_Registration_Info_UPackage__Script_InkEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x826F4258, 0xE1ABB234));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
