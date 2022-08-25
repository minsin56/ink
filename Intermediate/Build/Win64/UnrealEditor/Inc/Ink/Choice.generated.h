// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INK_Choice_generated_h
#error "Choice.generated.h already included, missing '#pragma once' in Choice.h"
#endif
#define INK_Choice_generated_h

#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_SPARSE_DATA
#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIndex); \
	DECLARE_FUNCTION(execSourcePath); \
	DECLARE_FUNCTION(execPathStringOnChoice); \
	DECLARE_FUNCTION(execText);


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIndex); \
	DECLARE_FUNCTION(execSourcePath); \
	DECLARE_FUNCTION(execPathStringOnChoice); \
	DECLARE_FUNCTION(execText);


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChoice(); \
	friend struct Z_Construct_UClass_UChoice_Statics; \
public: \
	DECLARE_CLASS(UChoice, UMonoBaseClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ink"), NO_API) \
	DECLARE_SERIALIZER(UChoice)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUChoice(); \
	friend struct Z_Construct_UClass_UChoice_Statics; \
public: \
	DECLARE_CLASS(UChoice, UMonoBaseClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ink"), NO_API) \
	DECLARE_SERIALIZER(UChoice)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChoice(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChoice) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChoice); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChoice(UChoice&&); \
	NO_API UChoice(const UChoice&); \
public:


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChoice(UChoice&&); \
	NO_API UChoice(const UChoice&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChoice); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChoice); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChoice)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_9_PROLOG
#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_SPARSE_DATA \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_RPC_WRAPPERS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_INCLASS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_SPARSE_DATA \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_INCLASS_NO_PURE_DECLS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INK_API UClass* StaticClass<class UChoice>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FishGame_Plugins_Ink_Source_Ink_Public_Choice_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
