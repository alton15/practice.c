#include "common.h"
#include "phoneData.h"
#include "screenOut.h"
#include <string.h>

#define LIST_NUM 100

int numOfData = 0;
phoneData *phoneList[LIST_NUM];

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

void SearchPhoneData(void)
{
	char na[LIST_NUM];
	int i, f = 0;
	printf("ã�� �̸�: ");
	scanf("%s", &na);
	for(i = 0; i < numOfData; i++)
	{
		if(strcmp(na, phoneList[i].name) == 0)
		{
			ShowPhoneInfo(phoneList[i]);
			getchar();
		}
		if(strcmp(na, phoneList[i].name) != 0)
		{
			f++;
			if(f == numOfData)
			{
				printf("������ �����ϴ�. \n");
				getchar(); 
			}
		}
		else
		{
			printf("�˻��� �Ϸ�Ǿ����ϴ�.");
			getchar();
		}
	}
	getchar();
}

void DeletePhoneData(void)
{
	char na[LIST_NUM];
	int i;
	printf("ã�� �̸�: ");
	scanf("%s", &na);
	for(i = 0; i < numOfData; i++)
	{
		if(strcmp(na, phoneList[i].name) == 0)
		{
			strcpy(phoneList[i].name, phoneList[i].name + 1);
			strcpy(phoneList[i].phoneNum, phoneList[i].phoneNum + 1);
			numOfData--;
			getchar();
		}
	}
	printf("������ �Ϸ�Ǿ����ϴ�.");
	getchar(); 
}
