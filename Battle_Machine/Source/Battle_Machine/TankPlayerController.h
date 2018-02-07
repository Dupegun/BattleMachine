

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //must be last


UCLASS()
class BATTLE_MACHINE_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATank * GetControlledTank() const;
	
	virtual void BeginPlay() override;
	
	
	
};
