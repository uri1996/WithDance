// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightStick.generated.h"

UCLASS()
class WITHDANCE_API ALightStick : public AActor
{
	GENERATED_BODY()
	
public:	
	ALightStick();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
		float MovementSpeed;

	UPROPERTY(EditAnywhere)
		float Radius;

	UPROPERTY(EditAnywhere)
		float StartRadius;

	UPROPERTY(EditAnywhere)
		float EndRadius;

	float CurrentRadius;

	float RunningTime;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> GlowingCylinder;

	UPROPERTY(VisibleAnywhere)
	TObjectPtr<UStaticMeshComponent> NormalCylinder;
};
