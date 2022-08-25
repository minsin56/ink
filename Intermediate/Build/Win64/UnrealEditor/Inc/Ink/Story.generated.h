// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInkVar;
class UStoryState;
class UVariablesState;
class UChoice;
class UStoryAsset;
class UStory;
#ifdef INK_Story_generated_h
#error "Story.generated.h already included, missing '#pragma once' in Story.h"
#endif
#define INK_Story_generated_h

#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_15_DELEGATE \
struct _Script_Ink_eventVariableObserver_Parms \
{ \
	FString variableName; \
	FInkVar newValue; \
}; \
static inline void FVariableObserver_DelegateWrapper(const FScriptDelegate& VariableObserver, const FString& variableName, FInkVar newValue) \
{ \
	_Script_Ink_eventVariableObserver_Parms Parms; \
	Parms.variableName=variableName; \
	Parms.newValue=newValue; \
	VariableObserver.ProcessDelegate<UObject>(&Parms); \
}


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_SPARSE_DATA
#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBackgroundSaveComplete); \
	DECLARE_FUNCTION(execCopyStateForBackgroundThreadSave); \
	DECLARE_FUNCTION(execBuildStringOfHeirarchy); \
	DECLARE_FUNCTION(execEvaluateFunctionOutString); \
	DECLARE_FUNCTION(execEvaluateFunction); \
	DECLARE_FUNCTION(execHasFunction); \
	DECLARE_FUNCTION(execRemoveVariableObserver); \
	DECLARE_FUNCTION(execObserveVariables); \
	DECLARE_FUNCTION(execObserveVariable); \
	DECLARE_FUNCTION(execVariablesState); \
	DECLARE_FUNCTION(execChoosePathString); \
	DECLARE_FUNCTION(execTagsForContentAtPath); \
	DECLARE_FUNCTION(execAsyncContinueComplete); \
	DECLARE_FUNCTION(execContinueMaximally); \
	DECLARE_FUNCTION(execContinueAsync); \
	DECLARE_FUNCTION(execResetCallstack); \
	DECLARE_FUNCTION(execResetErrors); \
	DECLARE_FUNCTION(execResetState); \
	DECLARE_FUNCTION(execCurrentWarnings); \
	DECLARE_FUNCTION(execCurrentErrors); \
	DECLARE_FUNCTION(execGlobalTags); \
	DECLARE_FUNCTION(execCurrentTags); \
	DECLARE_FUNCTION(execHasWarning); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execState); \
	DECLARE_FUNCTION(execCurrentText); \
	DECLARE_FUNCTION(execChooseChoiceIndex); \
	DECLARE_FUNCTION(execCurrentChoices); \
	DECLARE_FUNCTION(execCanContinue); \
	DECLARE_FUNCTION(execContinue); \
	DECLARE_FUNCTION(execNewStory); \
	DECLARE_FUNCTION(execGetInkVersionCurrent);


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBackgroundSaveComplete); \
	DECLARE_FUNCTION(execCopyStateForBackgroundThreadSave); \
	DECLARE_FUNCTION(execBuildStringOfHeirarchy); \
	DECLARE_FUNCTION(execEvaluateFunctionOutString); \
	DECLARE_FUNCTION(execEvaluateFunction); \
	DECLARE_FUNCTION(execHasFunction); \
	DECLARE_FUNCTION(execRemoveVariableObserver); \
	DECLARE_FUNCTION(execObserveVariables); \
	DECLARE_FUNCTION(execObserveVariable); \
	DECLARE_FUNCTION(execVariablesState); \
	DECLARE_FUNCTION(execChoosePathString); \
	DECLARE_FUNCTION(execTagsForContentAtPath); \
	DECLARE_FUNCTION(execAsyncContinueComplete); \
	DECLARE_FUNCTION(execContinueMaximally); \
	DECLARE_FUNCTION(execContinueAsync); \
	DECLARE_FUNCTION(execResetCallstack); \
	DECLARE_FUNCTION(execResetErrors); \
	DECLARE_FUNCTION(execResetState); \
	DECLARE_FUNCTION(execCurrentWarnings); \
	DECLARE_FUNCTION(execCurrentErrors); \
	DECLARE_FUNCTION(execGlobalTags); \
	DECLARE_FUNCTION(execCurrentTags); \
	DECLARE_FUNCTION(execHasWarning); \
	DECLARE_FUNCTION(execHasError); \
	DECLARE_FUNCTION(execState); \
	DECLARE_FUNCTION(execCurrentText); \
	DECLARE_FUNCTION(execChooseChoiceIndex); \
	DECLARE_FUNCTION(execCurrentChoices); \
	DECLARE_FUNCTION(execCanContinue); \
	DECLARE_FUNCTION(execContinue); \
	DECLARE_FUNCTION(execNewStory); \
	DECLARE_FUNCTION(execGetInkVersionCurrent);


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStory(); \
	friend struct Z_Construct_UClass_UStory_Statics; \
public: \
	DECLARE_CLASS(UStory, UMonoBaseClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ink"), NO_API) \
	DECLARE_SERIALIZER(UStory)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUStory(); \
	friend struct Z_Construct_UClass_UStory_Statics; \
public: \
	DECLARE_CLASS(UStory, UMonoBaseClass, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Ink"), NO_API) \
	DECLARE_SERIALIZER(UStory)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStory(UStory&&); \
	NO_API UStory(const UStory&); \
public:


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStory(UStory&&); \
	NO_API UStory(const UStory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStory)


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_21_PROLOG
#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_SPARSE_DATA \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_RPC_WRAPPERS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_INCLASS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_SPARSE_DATA \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_INCLASS_NO_PURE_DECLS \
	FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INK_API UClass* StaticClass<class UStory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FishGame_Plugins_Ink_Source_Ink_Public_Story_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
