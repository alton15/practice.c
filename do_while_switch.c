#include <stdio.h>

int main(void)
{
	int a;
	
	do
	{
		printf("\n1. �Է��ϱ�\n2. ����ϱ�\n3. �����ϱ�\n4. ������\n");
		
		printf("�۾��� ��ȣ�� �����ϼ���.\n");
		
		scanf("%d", &a);
		
		switch(a)
		{
			case 1 : printf("�Է��� �����Ͽ����ϴ�.\n");
				break;
			case 2 : printf("����� �����Ͽ����ϴ�.\n");
				break;
			case 3 : printf("������ �����Ͽ����ϴ�.\n");
				break;
			case 4 : printf("�����⸦ �����Ͽ����ϴ�.\n");
				break;
			default : printf("�߸� �����Ͽ����ϴ�.\n");
				break; 
		}
	} while(a != 4);
}
