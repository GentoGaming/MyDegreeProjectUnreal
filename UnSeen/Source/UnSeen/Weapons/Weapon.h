#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

struct FKeyBindingStruct;



UENUM(BlueprintType)
enum EShootingType
{
	RayCast UMETA(DisplayName = "Raycast Shooting"),
	Projectile UMETA(DisplayName = "Projectile Shooting"),
};

UENUM(BlueprintType)
enum EWeaponType
{
	SingleShot UMETA(DisplayName = "SingleShot"),
	SemiAutomatic UMETA(DisplayName = "Semi Automatic"),
	FullAutomatic UMETA(DisplayName = "Full Automatic")
};


class USphereComponent;
UCLASS()
class UNSEEN_API AWeapon : public AActor
{
	GENERATED_BODY()

	UPROPERTY(Category=Weapon, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	USceneComponent* SceneComponent;
	
	UPROPERTY(Category=Weapon, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	 USkeletalMeshComponent* SkeletalMeshComponent ;

	UPROPERTY(Category=Weapon, VisibleAnywhere, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	USphereComponent* SphereComponent;

	UPROPERTY()
	class APlayerCharacter* Player;

	void StartShooting();
	void StopShooting();
	
	void ShootingState( FKeyBindingStruct KeyBindingStruct);

	UPROPERTY(Category=WeaponSettings, EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	float RateOfFire;

	UPROPERTY(Category=WeaponSettings, EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	float AmmoCount;	

	UPROPERTY(Category=WeaponSettings, EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	TEnumAsByte<EWeaponType> WeaponType;

	UPROPERTY(Category=WeaponSettings, EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	TEnumAsByte<EShootingType> ShootingType;
	
	UPROPERTY(Category=WeaponSettings, EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess = "true"))
	float SemiShotsCount = 3;

	//TSubclassOf<Pro>

public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
