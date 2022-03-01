#include "Weapon.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UnSeen/Player/CharacterAIController.h"
#include "UnSeen/Player/FKeyBindingStruct.h"
#include "UnSeen/Player/PlayerCharacter.h"

void AWeapon::StartShooting()
{
	if(AmmoCount < 1) return;
	if(WeaponType == SingleShot)
	{
		
	}

	//GetWorld()->GetTimerManager().SetTimer(FuzeTimerHandle, this, &ASBombActor::OnExplode, MaxFuzeTime, false);



	
}

void AWeapon::StopShooting()
{

}



void AWeapon::ShootingState( FKeyBindingStruct KeyBindingStruct)
{
	UE_LOG(LogTemp,Warning,TEXT("%d"), KeyBindingStruct.BShooting);

	if(KeyBindingStruct.BShooting == EKeyState::StartShooting)
	{
		StartShooting();
	}else if (KeyBindingStruct.BShooting == EKeyState::StopShooting)
	{
		StopShooting();
	}
}

AWeapon::AWeapon()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	Player = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if(Player == nullptr) return;
	ACharacterAIController* Controller = Cast<ACharacterAIController>(Player->GetController());
	if(Controller == nullptr) return;
	Controller->OnKeyAction.AddUObject(this, &AWeapon::ShootingState); //see above in wiki
}


