#include <stdio.h>

int main(void)
{
	int a[5];
	int i, j;
	int temp;
	
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	
	for(i = 0; i < 4; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
			if(a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
}
