// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhenomenonObject.generated.h"

UCLASS()
class SONGWOLUM_API APhenomenonObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhenomenonObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool IsObjectAbnormal[20] = { false };
	void SpawnObject(int ObjectNumber, bool IsNormalStage);

};
