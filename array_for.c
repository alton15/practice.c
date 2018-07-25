#include <stdio.h>

int main(void)
{
	int a[99];
	int b, c = 0;
	for(b = 1; b <= 100; b++)
	{
		scanf("%d", &a[b]);
		if(a[b] == 0)
		{
			break;
		}
		c++;
	}
	/*for(b = 1; b <= c; b++)			Â¦¼ö¸¸ Ãâ·Â 
	{
		if(a[b] % 2 == 0)
		{
			printf("%d ", a[b]);
		}
	}*/
	for(b = 1; b <= c; b++)
	{
		if(b % 2 == 0)
		{
			printf("%d ", a[b]);
		}
	}
}
