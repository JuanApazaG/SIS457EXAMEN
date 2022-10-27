// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ARCANOID02_Paddle_generated_h
#error "Paddle.generated.h already included, missing '#pragma once' in Paddle.h"
#endif
#define ARCANOID02_Paddle_generated_h

#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_SPARSE_DATA
#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_RPC_WRAPPERS
#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid02"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAPaddle(); \
	friend struct Z_Construct_UClass_APaddle_Statics; \
public: \
	DECLARE_CLASS(APaddle, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid02"), NO_API) \
	DECLARE_SERIALIZER(APaddle)


#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APaddle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APaddle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public:


#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APaddle(APaddle&&); \
	NO_API APaddle(const APaddle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APaddle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APaddle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APaddle)


#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SM_Paddle() { return STRUCT_OFFSET(APaddle, SM_Paddle); } \
	FORCEINLINE static uint32 __PPO__FloatingMovement() { return STRUCT_OFFSET(APaddle, FloatingMovement); }


#define Arcanoid02_Source_Arcanoid02_Paddle_h_11_PROLOG
#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_PRIVATE_PROPERTY_OFFSET \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_SPARSE_DATA \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_RPC_WRAPPERS \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_INCLASS \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid02_Source_Arcanoid02_Paddle_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_PRIVATE_PROPERTY_OFFSET \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_SPARSE_DATA \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_INCLASS_NO_PURE_DECLS \
	Arcanoid02_Source_Arcanoid02_Paddle_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID02_API UClass* StaticClass<class APaddle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoid02_Source_Arcanoid02_Paddle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
