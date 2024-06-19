// Fill out your copyright notice in the Description page of Project Settings.


#include "LightStick.h"
#include "Components/StaticMeshComponent.h"

ALightStick::ALightStick()
{
	PrimaryActorTick.bCanEverTick = true;

	NormalCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Normal"));
	RootComponent = NormalCylinder;

	GlowingCylinder = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Glow"));
	GlowingCylinder->SetupAttachment(RootComponent);
}

void ALightStick::BeginPlay()
{
	Super::BeginPlay();
	

}

void ALightStick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	 
	RunningTime += DeltaTime;

	float RotationY = 0.25f * FMath::Sin(RunningTime * 10.f);
	AddActorWorldRotation(FRotator(0.f, 0.f, RotationY));
}

