#include <stdio.h>

int main(void)
{
	int a, b = 1000;
	
	scanf("%d", &a); 
	
	if(a >= 20)
	{
		printf("���� ��� : %d", b);
	}
	else if(a >= 14)
	{
		printf("���� ��� : %d", b - (b/4));
	}
	else if(a >= 4)
	{
		printf("���� ��� : %d", b - (b/2));
	}
	else
	{
		printf("���� ��� : %d", b - b);
	}
}
