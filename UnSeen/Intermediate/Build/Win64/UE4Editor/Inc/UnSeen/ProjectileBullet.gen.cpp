// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnSeen/Weapons/ProjectileBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileBullet() {}
// Cross Module References
	UNSEEN_API UClass* Z_Construct_UClass_AProjectileBullet_NoRegister();
	UNSEEN_API UClass* Z_Construct_UClass_AProjectileBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnSeen();
// End Cross Module References
	void AProjectileBullet::StaticRegisterNativesAProjectileBullet()
	{
	}
	UClass* Z_Construct_UClass_AProjectileBullet_NoRegister()
	{
		return AProjectileBullet::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnSeen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/ProjectileBullet.h" },
		{ "ModuleRelativePath", "Weapons/ProjectileBullet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileBullet_Statics::ClassParams = {
		&AProjectileBullet::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileBullet, 3799700291);
	template<> UNSEEN_API UClass* StaticClass<AProjectileBullet>()
	{
		return AProjectileBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileBullet(Z_Construct_UClass_AProjectileBullet, &AProjectileBullet::StaticClass, TEXT("/Script/UnSeen"), TEXT("AProjectileBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
