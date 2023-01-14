// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformMoving.h"

// Sets default values
APlatformMoving::APlatformMoving()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlatformMoving::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlatformMoving::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

