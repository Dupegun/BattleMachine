
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/NavMovementComponent.h"
#include "TankMovementComponent.generated.h"


UCLASS()
class BATTLE_MACHINE_API UTankMovementComponent : public UNavMovementComponent
{
	GENERATED_BODY()

public:
	    UFUNCTION(BlueprintCallable, Category = Input)
		void IntendMoveForward(float Throw);
	
	
};
