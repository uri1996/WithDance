// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyQuartzClock.generated.h"


UCLASS()
class WITHDANCE_API AMyQuartzClock : public AActor
{
	GENERATED_BODY()
	
public:	
	AMyQuartzClock();
	virtual void Tick(float DeltaTime) override;


protected:
	virtual void BeginPlay() override;

private:

};
