#include <stdio.h>

int f(int *a, int *b)
{
	int c;
	
	scanf("%d", &c);
	
	*a = c / 4;
	*b = c % 4;
}

int main(void)
{
	int mod, rem;
	
	f(&mod, &rem);
	
	printf("��: %d, ������ : %d", mod, rem);
	
	return 0;
}
