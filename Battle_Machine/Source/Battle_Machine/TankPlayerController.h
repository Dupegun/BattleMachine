
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //must be last

class ATank;

UCLASS()
class BATTLE_MACHINE_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay() override;

private:

	ATank * GetControlledTank() const;

	UPROPERTY(EditDefaultsOnly)
		float CrossHaitXLocation = 0.5f;
	UPROPERTY(EditDefaultsOnly)
		float CrossHaitYLocation = 0.33333f;
	UPROPERTY(EditDefaultsOnly)
		float LineTraceRangeParameter = 1000000.f; //10 km

	//To start moving the barrel direction to the crosshair direction
	void AimTowardsCrosshair();
	
	bool GetSightRayHitLocation(FVector &OutHitLocation) const;
	
	bool GetLookDirection(FVector2D ScreenLocation, FVector &LookDirection) const;

	bool GetLookVectorHitDirection(FVector LookDirection, FVector &HitLocation) const;
};
