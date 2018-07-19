#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("세 수를 공백으로 분리해 입력해라.\n에시) 90 80 70\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if(a>=b && a>=c)
	{
		printf("%d\n", a);
	}
	else if(b>=a && b>=c)
	{
		printf("%d\n", b);
	}
	else
	{
		printf("%d\n", c);
	}
}
