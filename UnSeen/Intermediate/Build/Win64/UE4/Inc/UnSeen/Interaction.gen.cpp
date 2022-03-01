// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnSeen/Player/Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteraction() {}
// Cross Module References
	UNSEEN_API UClass* Z_Construct_UClass_UInteraction_NoRegister();
	UNSEEN_API UClass* Z_Construct_UClass_UInteraction();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_UnSeen();
// End Cross Module References
	void UInteraction::StaticRegisterNativesUInteraction()
	{
	}
	UClass* Z_Construct_UClass_UInteraction_NoRegister()
	{
		return UInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnSeen,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteraction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Player/Interaction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player/Interaction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteraction_Statics::ClassParams = {
		&UInteraction::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteraction, 1114053523);
	template<> UNSEEN_API UClass* StaticClass<UInteraction>()
	{
		return UInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteraction(Z_Construct_UClass_UInteraction, &UInteraction::StaticClass, TEXT("/Script/UnSeen"), TEXT("UInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
