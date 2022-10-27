// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef ARCANOID02_BallBound2_generated_h
#error "BallBound2.generated.h already included, missing '#pragma once' in BallBound2.h"
#endif
#define ARCANOID02_BallBound2_generated_h

#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_SPARSE_DATA
#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABallBound2(); \
	friend struct Z_Construct_UClass_ABallBound2_Statics; \
public: \
	DECLARE_CLASS(ABallBound2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid02"), NO_API) \
	DECLARE_SERIALIZER(ABallBound2)


#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABallBound2(); \
	friend struct Z_Construct_UClass_ABallBound2_Statics; \
public: \
	DECLARE_CLASS(ABallBound2, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Arcanoid02"), NO_API) \
	DECLARE_SERIALIZER(ABallBound2)


#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABallBound2(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABallBound2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBound2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBound2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBound2(ABallBound2&&); \
	NO_API ABallBound2(const ABallBound2&); \
public:


#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABallBound2(ABallBound2&&); \
	NO_API ABallBound2(const ABallBound2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABallBound2); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABallBound2); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABallBound2)


#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(ABallBound2, BoxCollision); }


#define Arcanoid02_Source_Arcanoid02_BallBound2_h_11_PROLOG
#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_PRIVATE_PROPERTY_OFFSET \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_SPARSE_DATA \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_RPC_WRAPPERS \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_INCLASS \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Arcanoid02_Source_Arcanoid02_BallBound2_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_PRIVATE_PROPERTY_OFFSET \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_SPARSE_DATA \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_INCLASS_NO_PURE_DECLS \
	Arcanoid02_Source_Arcanoid02_BallBound2_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCANOID02_API UClass* StaticClass<class ABallBound2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Arcanoid02_Source_Arcanoid02_BallBound2_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
