

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "FKeyBindingStruct.h"
#include "CharacterAIController.generated.h"

UCLASS()
class UNSEEN_API ACharacterAIController : public APlayerController
{
	GENERATED_BODY()
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnKeyAction, FKeyBindingStruct KeyBindStruct);

	FKeyBindingStruct KeyBindingStruct;


public:
	FOnKeyAction OnKeyAction;
	UFUNCTION(BlueprintNativeEvent)
void StartShooting();
	
	UFUNCTION(BlueprintNativeEvent)
	void StopShooting();
	virtual void SetupInputComponent() override;

};
