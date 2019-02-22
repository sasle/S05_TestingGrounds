// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "TestingGroundsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestingGroundsGameMode() {}
// Cross Module References
	TESTINGGROUNDS_API UClass* Z_Construct_UClass_ATestingGroundsGameMode_NoRegister();
	TESTINGGROUNDS_API UClass* Z_Construct_UClass_ATestingGroundsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TestingGrounds();
// End Cross Module References
	void ATestingGroundsGameMode::StaticRegisterNativesATestingGroundsGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATestingGroundsGameMode_NoRegister()
	{
		return ATestingGroundsGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ATestingGroundsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_TestingGrounds,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "TestingGroundsGameMode.h" },
				{ "ModuleRelativePath", "TestingGroundsGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ATestingGroundsGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ATestingGroundsGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATestingGroundsGameMode, 1578678352);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATestingGroundsGameMode(Z_Construct_UClass_ATestingGroundsGameMode, &ATestingGroundsGameMode::StaticClass, TEXT("/Script/TestingGrounds"), TEXT("ATestingGroundsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestingGroundsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
