// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INK_InkCompiler_generated_h
#error "InkCompiler.generated.h already included, missing '#pragma once' in InkCompiler.h"
#endif
#define INK_InkCompiler_generated_h

#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_SPARSE_DATA
#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompileToJson); \
	DECLARE_FUNCTION(execGetAuthorMessages); \
	DECLARE_FUNCTION(execGetWarnings); \
	DECLARE_FUNCTION(execGetErrors);


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompileToJson); \
	DECLARE_FUNCTION(execGetAuthorMessages); \
	DECLARE_FUNCTION(execGetWarnings); \
	DECLARE_FUNCTION(execGetErrors);


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInkCompiler(); \
	friend struct Z_Construct_UClass_UInkCompiler_Statics; \
public: \
	DECLARE_CLASS(UInkCompiler, UMonoBaseClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ink"), NO_API) \
	DECLARE_SERIALIZER(UInkCompiler)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUInkCompiler(); \
	friend struct Z_Construct_UClass_UInkCompiler_Statics; \
public: \
	DECLARE_CLASS(UInkCompiler, UMonoBaseClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ink"), NO_API) \
	DECLARE_SERIALIZER(UInkCompiler)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInkCompiler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInkCompiler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkCompiler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkCompiler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInkCompiler(UInkCompiler&&); \
	NO_API UInkCompiler(const UInkCompiler&); \
public:


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInkCompiler(UInkCompiler&&); \
	NO_API UInkCompiler(const UInkCompiler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInkCompiler); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInkCompiler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInkCompiler)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_9_PROLOG
#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_SPARSE_DATA \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_RPC_WRAPPERS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_INCLASS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_SPARSE_DATA \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_INCLASS_NO_PURE_DECLS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INK_API UClass* StaticClass<class UInkCompiler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FishGame_Plugins_Ink_Source_Ink_Public_InkCompiler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
