#include <stdio.h>

int main(void)
{
	int a, b = 1000;
	
	scanf("%d", &a); 
	
	if(a >= 20)
	{
		printf("최종 요금 : %d", b);
	}
	else if(a >= 14)
	{
		printf("최종 요금 : %d", b - (b/4));
	}
	else if(a >= 4)
	{
		printf("최종 요금 : %d", b - (b/2));
	}
	else
	{
		printf("최종 요금 : %d", b - b);
	}
}
