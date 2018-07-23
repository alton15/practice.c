#include "common.h"
#include "phoneData.h"
#include "screenOut.h"

#define LIST_NUM 100

int numOfData = 0;
phoneData phoneList[LIST_NUM];

void InputPhoneData(void)
{
	printf("이름 입력: ");
	scanf("%s", phoneList[numOfData].name);
	printf("전화번호 입력: ");
	scanf("%s", phoneList[numOfData].phoneNum);
	printf("입력이 완료되었습니다.");
	numOfData++;
	getchar();
}

void ShowAllData(void)
{
	int i;
	for(i = 0; i < numOfData; i++)
	{
		ShowPhoneInfo(phoneList[i]);
	}
	printf("출력이 완료되었습니다.");
	getchar();
}
