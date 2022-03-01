// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnSeen/Player/CharacterAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAIController() {}
// Cross Module References
	UNSEEN_API UClass* Z_Construct_UClass_ACharacterAIController_NoRegister();
	UNSEEN_API UClass* Z_Construct_UClass_ACharacterAIController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_UnSeen();
// End Cross Module References
	DEFINE_FUNCTION(ACharacterAIController::execStopShooting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopShooting_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACharacterAIController::execStartShooting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartShooting_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_ACharacterAIController_StartShooting = FName(TEXT("StartShooting"));
	void ACharacterAIController::StartShooting()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterAIController_StartShooting),NULL);
	}
	static FName NAME_ACharacterAIController_StopShooting = FName(TEXT("StopShooting"));
	void ACharacterAIController::StopShooting()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACharacterAIController_StopShooting),NULL);
	}
	void ACharacterAIController::StaticRegisterNativesACharacterAIController()
	{
		UClass* Class = ACharacterAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartShooting", &ACharacterAIController::execStartShooting },
			{ "StopShooting", &ACharacterAIController::execStopShooting },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACharacterAIController_StartShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterAIController_StartShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CharacterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterAIController_StartShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterAIController, nullptr, "StartShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterAIController_StartShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterAIController_StartShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterAIController_StartShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterAIController_StartShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACharacterAIController_StopShooting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACharacterAIController_StopShooting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/CharacterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterAIController_StopShooting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACharacterAIController, nullptr, "StopShooting", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACharacterAIController_StopShooting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterAIController_StopShooting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACharacterAIController_StopShooting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACharacterAIController_StopShooting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACharacterAIController_NoRegister()
	{
		return ACharacterAIController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UnSeen,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACharacterAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterAIController_StartShooting, "StartShooting" }, // 66116807
		{ &Z_Construct_UFunction_ACharacterAIController_StopShooting, "StopShooting" }, // 1367460433
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Player/CharacterAIController.h" },
		{ "ModuleRelativePath", "Player/CharacterAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACharacterAIController_Statics::ClassParams = {
		&ACharacterAIController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACharacterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACharacterAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACharacterAIController, 1604491524);
	template<> UNSEEN_API UClass* StaticClass<ACharacterAIController>()
	{
		return ACharacterAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACharacterAIController(Z_Construct_UClass_ACharacterAIController, &ACharacterAIController::StaticClass, TEXT("/Script/UnSeen"), TEXT("ACharacterAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
