#include <stdio.h>

int main(void)
{
	int a = 0, num, sum = 0;
	scanf("%d", &num);
	
	if(num > 10)
	{
		printf("10 이하의 수를 입력하시오.");
	}
	else
	{
		while(a <= num)
		{
			sum+=a;
			a++;
		}
		printf("1에서 num까지의 합 : %d", sum);
	}
}
