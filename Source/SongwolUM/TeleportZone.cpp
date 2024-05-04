// Fill out your copyright notice in the Description page of Project Settings.


#include "TeleportZone.h"
#include "SWUMGameModeBase.h"

// Sets default values
ATeleportZone::ATeleportZone()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATeleportZone::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATeleportZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATeleportZone::ExecuteTeleport(bool IsFront)
{
	ASWUMGameModeBase* GameMode = Cast<ASWUMGameModeBase>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->ChangeStage(IsFrontZone);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameModeBase를 가져오는데 실패했습니다."));
	}
}

