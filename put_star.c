#include <stdio.h>

int main(void)
{
	int a, b;
	
	for(a = 9; a > 3; a--)
	{
		for(b = 0 ; b < 9 - a; b++)
		{
			printf(" ");
		}
		
		for(b = 0; b < a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	for(a = 3; a <= 9; a++)
	{
		for(b = 0 ; b < 9 - a; b++)
		{
			printf(" ");
		}
		
		for(b = 0; b < a; b++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
