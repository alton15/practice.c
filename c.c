#include <stdio.h>

int main(void)
{
	int A = 1, B = 0, K = 0, N;
	
	scanf("%d", &N);
	
	while(1)
	{
		if(N != 0)
		{
			K = N % 2;
			B = B + K * A;
			A = A * 10;
			N = N / 2;
		}
		else if(N == 0)
		{
			printf("%d", B);
			break;
		}
	}
}
