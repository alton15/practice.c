#include <stdio.h>
int main(void)
{
	int a, b=0;
	
	for(a=0; b<=100; b++)
	{
		a+=b;
	}
	printf("1~100의 합은 %d입니다.", a);
}
