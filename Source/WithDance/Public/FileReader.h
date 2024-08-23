// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FileReader.generated.h"

UCLASS()
class WITHDANCE_API AFileReader : public AActor
{
	GENERATED_BODY()
	
public:	
	AFileReader();

	virtual void Tick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;
};
