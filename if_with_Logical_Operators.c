#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("�� ���� �������� �и��� �Է��ض�.\n����) 90 80 70\n");
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
