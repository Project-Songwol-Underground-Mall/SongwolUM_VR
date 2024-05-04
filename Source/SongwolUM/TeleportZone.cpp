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
	UPrimitiveComponent* BoxComponent = FindComponentByClass<UPrimitiveComponent>();
	if (BoxComponent)
	{
		BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ATeleportZone::OnOverlapBegin);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("BoxComponent�� ã�� �� �����ϴ�."));
	}
}

void ATeleportZone::ExecuteTeleport(bool IsFront)
{
	ASWUMGameModeBase* GameMode = Cast<ASWUMGameModeBase>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->ChangeStage(IsFrontZone);
		// ���⼭ �÷��̾��� ��ǥ �̵����� �����ϸ� �� �� ����.
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("GameModeBase�� �������µ� �����߽��ϴ�."));
	}
}

void ATeleportZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Check if the overlapping actor is a pawn
	APawn* OverlappingPawn = Cast<APawn>(OtherActor);
	if (OverlappingPawn)
	{
		// Get the current location of the pawn
		FVector CurrentLocation = OverlappingPawn->GetActorLocation();
		// Print the current location of the pawn
		UE_LOG(LogTemp, Warning, TEXT("�ε��� ��(ĳ����)�� ������ġ: %s"), *CurrentLocation.ToString());
	}
}

