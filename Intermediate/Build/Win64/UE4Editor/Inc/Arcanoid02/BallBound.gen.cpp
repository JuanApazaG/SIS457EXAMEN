// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid02/BallBound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallBound() {}
// Cross Module References
	ARCANOID02_API UClass* Z_Construct_UClass_ABallBound_NoRegister();
	ARCANOID02_API UClass* Z_Construct_UClass_ABallBound();
	ARCANOID02_API UClass* Z_Construct_UClass_ABall();
	UPackage* Z_Construct_UPackage__Script_Arcanoid02();
// End Cross Module References
	void ABallBound::StaticRegisterNativesABallBound()
	{
	}
	UClass* Z_Construct_UClass_ABallBound_NoRegister()
	{
		return ABallBound::StaticClass();
	}
	struct Z_Construct_UClass_ABallBound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallBound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABall,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallBound_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BallBound.h" },
		{ "ModuleRelativePath", "BallBound.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallBound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallBound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABallBound_Statics::ClassParams = {
		&ABallBound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABallBound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABallBound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABallBound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABallBound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABallBound, 2254102021);
	template<> ARCANOID02_API UClass* StaticClass<ABallBound>()
	{
		return ABallBound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABallBound(Z_Construct_UClass_ABallBound, &ABallBound::StaticClass, TEXT("/Script/Arcanoid02"), TEXT("ABallBound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallBound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
