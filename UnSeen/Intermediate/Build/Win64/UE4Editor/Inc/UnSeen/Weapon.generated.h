// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UNSEEN_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define UNSEEN_Weapon_generated_h

#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_SPARSE_DATA
#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_RPC_WRAPPERS
#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnSeen"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UnSeen"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SceneComponent() { return STRUCT_OFFSET(AWeapon, SceneComponent); } \
	FORCEINLINE static uint32 __PPO__SkeletalMeshComponent() { return STRUCT_OFFSET(AWeapon, SkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(AWeapon, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__Player() { return STRUCT_OFFSET(AWeapon, Player); } \
	FORCEINLINE static uint32 __PPO__RateOfFire() { return STRUCT_OFFSET(AWeapon, RateOfFire); } \
	FORCEINLINE static uint32 __PPO__AmmoCount() { return STRUCT_OFFSET(AWeapon, AmmoCount); } \
	FORCEINLINE static uint32 __PPO__WeaponType() { return STRUCT_OFFSET(AWeapon, WeaponType); } \
	FORCEINLINE static uint32 __PPO__ShootingType() { return STRUCT_OFFSET(AWeapon, ShootingType); } \
	FORCEINLINE static uint32 __PPO__SemiShotsCount() { return STRUCT_OFFSET(AWeapon, SemiShotsCount); }


#define UnSeen_Source_UnSeen_Weapons_Weapon_h_28_PROLOG
#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_PRIVATE_PROPERTY_OFFSET \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_SPARSE_DATA \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_RPC_WRAPPERS \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_INCLASS \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnSeen_Source_UnSeen_Weapons_Weapon_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_PRIVATE_PROPERTY_OFFSET \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_SPARSE_DATA \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_INCLASS_NO_PURE_DECLS \
	UnSeen_Source_UnSeen_Weapons_Weapon_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNSEEN_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnSeen_Source_UnSeen_Weapons_Weapon_h


#define FOREACH_ENUM_EWEAPONTYPE(op) \
	op(SingleShot) \
	op(SemiAutomatic) \
	op(FullAutomatic) 
#define FOREACH_ENUM_ESHOOTINGTYPE(op) \
	op(RayCast) \
	op(Projectile) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
