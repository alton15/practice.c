#include <stdio.h>

int main(void)
{
	int a, b;

	for(a = 5; a >= 0; a--)
	{
		for(b = 0; b < a; b++)
		{
			printf(" ");
		}
		printf("*\n");
	}
}
