
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SWUMGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class SONGWOLUM_API ASWUMGameModeBase : public AGameModeBase
{
	GENERATED_BODY()


public:
	void ChangeStage(bool IsFront); // 앞으로 전진 혹은 뒤로 돌아갔을 시 정답 여부에 따른 스테이지 변경
	void GetRandomStage(int StageNumber, bool IsCorrectDirection); // 스테이지 변경에 따른 스테이지 및 이상현상 랜덤 추첨

protected:



private:
	int CurrentStage = 0; // 현재 구역 번호
	int AbnormalNumber = -1; // 이상현상 스테이지에서 발생시킬 이상현상 번호
	bool IsAbnormalOccured[20] = { false }; // 이상현상 번호에 따른 발생 여부
	bool IsNormalStage = true; // 스테이지의 정상 및 이상현상 여부
	void EndGame();
	
};
