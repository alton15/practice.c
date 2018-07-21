#include <stdio.h>

int main(void)
{
	int a, sum = 0, count = 0, avg;
	
	printf("홀수들을 입력하면 합과 평균을 알려줍니다.\n0을 넣으면 값이 나옵니다.\n");
	
	do{
		scanf("%d", &a);
		if(a % 2 == 1)
		{
			sum+=a;
			count++;
		}
		if(a % 2 == 0)
		{
			printf("홀수를 입력하시오.\n");
		}
	} while(a != 0);
	
	avg = sum / count;
	
	printf("홀수의 합 : %d\n홀수의 평균 : %d", sum, avg);
}
