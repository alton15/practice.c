#include <stdio.h>

int main(void)
{
	int a, b = 0, c = 0, d;
	
	for(d = 1; d <= 10; d++)
	{
		scanf("%d", &a);
		if(a % 3 == 0)
		{
			b+=1;
		}
		if(a % 5 == 0)
		{
			c+=1;
		}
	}
	printf("3�� ����� ���� : %d\n", b);
	printf("5�� ����� ���� : %d\n", c);
}
