#include "common.h"
#include "phoneData.h"

void ShowMenu(void)
{
	system("cls");
	
	printf("------�� ��---------\n");
	printf("1. ��ȭ��ȣ �Է� \n");
	printf("2. ��ü ���� ��� \n");
	printf("3. ���� \n");
	printf("-----------------------\n");
	printf("����> ");
}

void ShowPhoneInfo(phoneData phone)
{
	printf("--------------------- \n"   );
	printf("| �� �̸�: %s \n", phone.name    );
	printf("| �� ��ȭ��ȣ: %s \n", phone.phoneNum);
	printf("--------------------- \n\n");
}
