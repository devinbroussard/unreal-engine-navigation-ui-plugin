// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_MyProjectCharacter_generated_h
#error "MyProjectCharacter.generated.h already included, missing '#pragma once' in MyProjectCharacter.h"
#endif
#define MYPROJECT_MyProjectCharacter_generated_h

#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_SPARSE_DATA
#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_RPC_WRAPPERS
#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyProjectCharacter(); \
	friend struct Z_Construct_UClass_AMyProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectCharacter)


#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public:


#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProjectCharacter(AMyProjectCharacter&&); \
	NO_API AMyProjectCharacter(const AMyProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectCharacter)


#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMyProjectCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMyProjectCharacter, FollowCamera); }


#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_9_PROLOG
#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_SPARSE_DATA \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_RPC_WRAPPERS \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_INCLASS \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_SPARSE_DATA \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_INCLASS_NO_PURE_DECLS \
	UnrealTesting_Source_MyProject_MyProjectCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class AMyProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealTesting_Source_MyProject_MyProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
