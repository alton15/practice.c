#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d", &a);
	
	for(b = 1; b <= a; b++)
	{
		if(b % 2 ==0)
		{
			printf("%d 10", b);
		}
	}
}
