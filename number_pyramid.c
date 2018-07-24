#include <stdio.h>

int main(void)
{
	int a, b, c, d=1;
	
	scanf("%d", &c);
	
	for(a = 1; a <= c; a++)
	{
		for(b = 0; b < a; b++)
		{
			printf("%d ", d);
			d++;
		}
		printf("\n");
	}
}
