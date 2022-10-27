// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid02/Arcanoid02GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcanoid02GameModeBase() {}
// Cross Module References
	ARCANOID02_API UClass* Z_Construct_UClass_AArcanoid02GameModeBase_NoRegister();
	ARCANOID02_API UClass* Z_Construct_UClass_AArcanoid02GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arcanoid02();
	ARCANOID02_API UClass* Z_Construct_UClass_ABrick_NoRegister();
// End Cross Module References
	void AArcanoid02GameModeBase::StaticRegisterNativesAArcanoid02GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AArcanoid02GameModeBase_NoRegister()
	{
		return AArcanoid02GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArcanoid02GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnBrick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnBrick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcanoid02GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoid02GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Arcanoid02GameModeBase.h" },
		{ "ModuleRelativePath", "Arcanoid02GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoid02GameModeBase_Statics::NewProp_SpawnBrick_MetaData[] = {
		{ "ModuleRelativePath", "Arcanoid02GameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AArcanoid02GameModeBase_Statics::NewProp_SpawnBrick = { "SpawnBrick", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AArcanoid02GameModeBase, SpawnBrick), Z_Construct_UClass_ABrick_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AArcanoid02GameModeBase_Statics::NewProp_SpawnBrick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoid02GameModeBase_Statics::NewProp_SpawnBrick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AArcanoid02GameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AArcanoid02GameModeBase_Statics::NewProp_SpawnBrick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcanoid02GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcanoid02GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcanoid02GameModeBase_Statics::ClassParams = {
		&AArcanoid02GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AArcanoid02GameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoid02GameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArcanoid02GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoid02GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcanoid02GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcanoid02GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcanoid02GameModeBase, 2851121614);
	template<> ARCANOID02_API UClass* StaticClass<AArcanoid02GameModeBase>()
	{
		return AArcanoid02GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcanoid02GameModeBase(Z_Construct_UClass_AArcanoid02GameModeBase, &AArcanoid02GameModeBase::StaticClass, TEXT("/Script/Arcanoid02"), TEXT("AArcanoid02GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcanoid02GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
