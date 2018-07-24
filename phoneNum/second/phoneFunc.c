#include "common.h"
#include "phoneData.h"
#include "screenOut.h"
#include <string.h>

#define LIST_NUM 100

int numOfData = 0;
phoneData *phoneList[LIST_NUM];

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

void SearchPhoneData(void)
{
	char na[LIST_NUM];
	int i, f = 0;
	printf("찾는 이름: ");
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
				printf("정보가 없습니다. \n");
				getchar(); 
			}
		}
		else
		{
			printf("검색이 완료되었습니다.");
			getchar();
		}
	}
	getchar();
}

void DeletePhoneData(void)
{
	char na[LIST_NUM];
	int i;
	printf("찾는 이름: ");
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
	printf("삭제가 완료되었습니다.");
	getchar(); 
}
