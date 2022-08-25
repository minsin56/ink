// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INK_StoryState_generated_h
#error "StoryState.generated.h already included, missing '#pragma once' in StoryState.h"
#endif
#define INK_StoryState_generated_h

#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_SPARSE_DATA
#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceEnd); \
	DECLARE_FUNCTION(execCurrentPathString); \
	DECLARE_FUNCTION(execVisitCountAtPathString); \
	DECLARE_FUNCTION(execLoadJson); \
	DECLARE_FUNCTION(execToJson); \
	DECLARE_FUNCTION(execInkSaveStateVersion);


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceEnd); \
	DECLARE_FUNCTION(execCurrentPathString); \
	DECLARE_FUNCTION(execVisitCountAtPathString); \
	DECLARE_FUNCTION(execLoadJson); \
	DECLARE_FUNCTION(execToJson); \
	DECLARE_FUNCTION(execInkSaveStateVersion);


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStoryState(); \
	friend struct Z_Construct_UClass_UStoryState_Statics; \
public: \
	DECLARE_CLASS(UStoryState, UMonoBaseClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ink"), NO_API) \
	DECLARE_SERIALIZER(UStoryState)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUStoryState(); \
	friend struct Z_Construct_UClass_UStoryState_Statics; \
public: \
	DECLARE_CLASS(UStoryState, UMonoBaseClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ink"), NO_API) \
	DECLARE_SERIALIZER(UStoryState)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStoryState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStoryState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoryState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoryState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoryState(UStoryState&&); \
	NO_API UStoryState(const UStoryState&); \
public:


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStoryState(UStoryState&&); \
	NO_API UStoryState(const UStoryState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStoryState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStoryState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStoryState)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_9_PROLOG
#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_SPARSE_DATA \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_RPC_WRAPPERS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_INCLASS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_SPARSE_DATA \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_INCLASS_NO_PURE_DECLS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INK_API UClass* StaticClass<class UStoryState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FishGame_Plugins_Ink_Source_Ink_Public_StoryState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
