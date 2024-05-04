// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AbnormalGhostAIController.generated.h"

/**
 * 
 */
UCLASS()
class SONGWOLUM_API AAbnormalGhostAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	bool IsDisappear() const;

private:
	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;
};
