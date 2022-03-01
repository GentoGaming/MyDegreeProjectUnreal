


#include "CharacterAIController.h"

void ACharacterAIController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAction("Shooting", IE_Pressed, this, &ACharacterAIController::StartShooting);
	InputComponent->BindAction("Shooting", IE_Released, this, &ACharacterAIController::StopShooting);
}


void ACharacterAIController::StopShooting_Implementation()
{
	KeyBindingStruct = FKeyBindingStruct();
	KeyBindingStruct.BShooting = EKeyState::StopShooting;
	OnKeyAction.Broadcast(KeyBindingStruct);
}

void ACharacterAIController::StartShooting_Implementation()
{
	KeyBindingStruct = FKeyBindingStruct();
	KeyBindingStruct.BShooting = EKeyState::StartShooting;
	OnKeyAction.Broadcast(KeyBindingStruct);
}


