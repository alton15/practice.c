#include "common.h"
#include "phoneData.h"
#include "screenOut.h"

#define LIST_NUM 100

int numOfData = 0;
phoneData phoneList[LIST_NUM];

void InputPhoneData(void)
{
	printf("�̸� �Է�: ");
	scanf("%s", phoneList[numOfData].name);
	printf("��ȭ��ȣ �Է�: ");
	scanf("%s", phoneList[numOfData].phoneNum);
	printf("�Է��� �Ϸ�Ǿ����ϴ�.");
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
	printf("����� �Ϸ�Ǿ����ϴ�.");
	getchar();
}
