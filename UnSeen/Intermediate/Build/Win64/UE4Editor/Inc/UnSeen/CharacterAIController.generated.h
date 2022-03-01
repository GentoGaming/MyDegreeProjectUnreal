// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNSEEN_CharacterAIController_generated_h
#error "CharacterAIController.generated.h already included, missing '#pragma once' in CharacterAIController.h"
#endif
#define UNSEEN_CharacterAIController_generated_h

#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_SPARSE_DATA
#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_RPC_WRAPPERS \
	virtual void StopShooting_Implementation(); \
	virtual void StartShooting_Implementation(); \
 \
	DECLARE_FUNCTION(execStopShooting); \
	DECLARE_FUNCTION(execStartShooting);


#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopShooting_Implementation(); \
	virtual void StartShooting_Implementation(); \
 \
	DECLARE_FUNCTION(execStopShooting); \
	DECLARE_FUNCTION(execStartShooting);


#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_EVENT_PARMS
#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_CALLBACK_WRAPPERS
#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterAIController(); \
	friend struct Z_Construct_UClass_ACharacterAIController_Statics; \
public: \
	DECLARE_CLASS(ACharacterAIController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnSeen"), NO_API) \
	DECLARE_SERIALIZER(ACharacterAIController)


#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACharacterAIController(); \
	friend struct Z_Construct_UClass_ACharacterAIController_Statics; \
public: \
	DECLARE_CLASS(ACharacterAIController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnSeen"), NO_API) \
	DECLARE_SERIALIZER(ACharacterAIController)


#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterAIController(ACharacterAIController&&); \
	NO_API ACharacterAIController(const ACharacterAIController&); \
public:


#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterAIController(ACharacterAIController&&); \
	NO_API ACharacterAIController(const ACharacterAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterAIController)


#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_PRIVATE_PROPERTY_OFFSET
#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_10_PROLOG \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_EVENT_PARMS


#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_SPARSE_DATA \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_RPC_WRAPPERS \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_CALLBACK_WRAPPERS \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_INCLASS \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_PRIVATE_PROPERTY_OFFSET \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_SPARSE_DATA \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_CALLBACK_WRAPPERS \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_INCLASS_NO_PURE_DECLS \
	UnSeen_Source_UnSeen_Player_CharacterAIController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNSEEN_API UClass* StaticClass<class ACharacterAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnSeen_Source_UnSeen_Player_CharacterAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
