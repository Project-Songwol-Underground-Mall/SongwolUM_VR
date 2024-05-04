// Fill out your copyright notice in the Description page of Project Settings.


#include "SWUMGameModeBase.h"
#include <cstdlib>
#include <ctime>

void ASWUMGameModeBase::ChangeStage(bool IsFront)
{
	if ((IsFront && IsNormalStage) || (!IsFront && !IsNormalStage))
	{
		CurrentStage++;
		if (CurrentStage == 5)
		{
			EndGame();
		}
		GetRandomStage(CurrentStage, true);
	}

	else
	{
		CurrentStage = 0;
		GetRandomStage(CurrentStage, false);
	}
}

void ASWUMGameModeBase::GetRandomStage(int StageNumber, bool IsCorrectDirection)
{
	if (!IsCorrectDirection)
	{
		AbnormalNumber = -1;
		IsNormalStage = true;
		return;
	}

	int Boundary = 0;
	if (StageNumber == 1) Boundary = 69;
	if (StageNumber == 2) Boundary = 79;
	if (StageNumber == 3) Boundary = 84;
	if (StageNumber == 4) Boundary = 89;
	
	srand(static_cast<unsigned int>(time(0)));
	int Result = rand() % 100;
	
	if (Result <= Boundary || IsNormalStage) // 이전 스테이지가 일반 스테이지거나 추첨 결과가 이상현상 스테이지
	{
		while (IsAbnormalOccured[AbnormalNumber])
		{
			AbnormalNumber = rand() % 20;
		}
		IsAbnormalOccured[AbnormalNumber] = true;
		IsNormalStage = false;
 	}
	if (Result > Boundary && !IsNormalStage) // 이전 스테이지가 이상현상 스테이지이고 추첨 결과가 일반 스테이지
	{
		AbnormalNumber = -1;
		IsNormalStage = true;
	}
}

void ASWUMGameModeBase::EndGame()
{

}
