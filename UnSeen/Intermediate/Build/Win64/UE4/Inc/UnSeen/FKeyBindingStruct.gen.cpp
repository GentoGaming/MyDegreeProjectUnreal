// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnSeen/Player/FKeyBindingStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFKeyBindingStruct() {}
// Cross Module References
	UNSEEN_API UEnum* Z_Construct_UEnum_UnSeen_EKeyState();
	UPackage* Z_Construct_UPackage__Script_UnSeen();
	UNSEEN_API UScriptStruct* Z_Construct_UScriptStruct_FKeyBindingStruct();
// End Cross Module References
	static UEnum* EKeyState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnSeen_EKeyState, Z_Construct_UPackage__Script_UnSeen(), TEXT("EKeyState"));
		}
		return Singleton;
	}
	template<> UNSEEN_API UEnum* StaticEnum<EKeyState>()
	{
		return EKeyState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKeyState(EKeyState_StaticEnum, TEXT("/Script/UnSeen"), TEXT("EKeyState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnSeen_EKeyState_Hash() { return 1055519709U; }
	UEnum* Z_Construct_UEnum_UnSeen_EKeyState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnSeen();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKeyState"), 0, Get_Z_Construct_UEnum_UnSeen_EKeyState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "StartShooting", (int64)StartShooting },
				{ "StopShooting", (int64)StopShooting },
				{ "Undeclared", (int64)Undeclared },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Player/FKeyBindingStruct.h" },
				{ "StartShooting.Name", "StartShooting" },
				{ "StopShooting.Name", "StopShooting" },
				{ "Undeclared.Name", "Undeclared" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnSeen,
				nullptr,
				"EKeyState",
				"EKeyState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FKeyBindingStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNSEEN_API uint32 Get_Z_Construct_UScriptStruct_FKeyBindingStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyBindingStruct, Z_Construct_UPackage__Script_UnSeen(), TEXT("KeyBindingStruct"), sizeof(FKeyBindingStruct), Get_Z_Construct_UScriptStruct_FKeyBindingStruct_Hash());
	}
	return Singleton;
}
template<> UNSEEN_API UScriptStruct* StaticStruct<FKeyBindingStruct>()
{
	return FKeyBindingStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyBindingStruct(FKeyBindingStruct::StaticStruct, TEXT("/Script/UnSeen"), TEXT("KeyBindingStruct"), false, nullptr, nullptr);
static struct FScriptStruct_UnSeen_StaticRegisterNativesFKeyBindingStruct
{
	FScriptStruct_UnSeen_StaticRegisterNativesFKeyBindingStruct()
	{
		UScriptStruct::DeferCppStructOps<FKeyBindingStruct>(FName(TEXT("KeyBindingStruct")));
	}
} ScriptStruct_UnSeen_StaticRegisterNativesFKeyBindingStruct;
	struct Z_Construct_UScriptStruct_FKeyBindingStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyBindingStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//BlueprintType\n" },
		{ "ModuleRelativePath", "Player/FKeyBindingStruct.h" },
		{ "ToolTip", "BlueprintType" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyBindingStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyBindingStruct>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyBindingStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnSeen,
		nullptr,
		&NewStructOps,
		"KeyBindingStruct",
		sizeof(FKeyBindingStruct),
		alignof(FKeyBindingStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyBindingStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyBindingStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyBindingStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyBindingStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnSeen();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyBindingStruct"), sizeof(FKeyBindingStruct), Get_Z_Construct_UScriptStruct_FKeyBindingStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyBindingStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyBindingStruct_Hash() { return 3188526948U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
