// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeleportZone.generated.h"

UCLASS()
class SONGWOLUM_API ATeleportZone : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATeleportZone();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void ExecuteTeleport(bool IsFront);

	UPROPERTY(EditAnywhere)
	bool IsFrontZone; // True : 앞으로 전진, False : 뒤로 후진

};
