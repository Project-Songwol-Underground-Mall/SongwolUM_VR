// Fill out your copyright notice in the Description page of Project Settings.


#include "PhenomenonObject.h"

// Sets default values
APhenomenonObject::APhenomenonObject()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APhenomenonObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhenomenonObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APhenomenonObject::SpawnObject(int ObjectNumber, bool IsNormalStage)
{

}

