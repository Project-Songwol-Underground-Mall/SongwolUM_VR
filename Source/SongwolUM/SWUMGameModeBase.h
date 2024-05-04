
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
	void ChangeStage(bool IsFront); // ������ ���� Ȥ�� �ڷ� ���ư��� �� ���� ���ο� ���� �������� ����
	void GetRandomStage(int StageNumber, bool IsCorrectDirection); // �������� ���濡 ���� �������� �� �̻����� ���� ��÷

protected:



private:
	int CurrentStage = 0; // ���� ���� ��ȣ
	int AbnormalNumber = -1; // �̻����� ������������ �߻���ų �̻����� ��ȣ
	bool IsAbnormalOccured[20] = { false }; // �̻����� ��ȣ�� ���� �߻� ����
	bool IsNormalStage = true; // ���������� ���� �� �̻����� ����
	void EndGame();
	
};
