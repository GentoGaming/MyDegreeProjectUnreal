#pragma once
#include "CoreMinimal.h"
#include "FKeyBindingStruct.generated.h"

UENUM(BlueprintType)
enum EKeyState
{
StartShooting = 0 ,
StopShooting =	1 ,
Undeclared = 2
};

//BlueprintType
USTRUCT()
struct FKeyBindingStruct
{
	GENERATED_BODY()
	int BShooting = Undeclared;
};

