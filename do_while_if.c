#include <stdio.h>

int main(void)
{
	int a, sum = 0, count = 0, avg;
	
	printf("Ȧ������ �Է��ϸ� �հ� ����� �˷��ݴϴ�.\n0�� ������ ���� ���ɴϴ�.\n");
	
	do{
		scanf("%d", &a);
		if(a % 2 == 1)
		{
			sum+=a;
			count++;
		}
		if(a % 2 == 0)
		{
			printf("Ȧ���� �Է��Ͻÿ�.\n");
		}
	} while(a != 0);
	
	avg = sum / count;
	
	printf("Ȧ���� �� : %d\nȦ���� ��� : %d", sum, avg);
}
