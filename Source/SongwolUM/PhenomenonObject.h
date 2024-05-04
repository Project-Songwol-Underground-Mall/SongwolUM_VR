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

	UPROPERTY(EditAnywhere)
	int ObjectNumber;

	UPROPERTY(EditAnywhere)
	bool isNormalState = true;

	void SpawnObject(int ObjectNum, bool IsNormalStage);
};
