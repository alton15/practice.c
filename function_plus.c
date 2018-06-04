#include <stdio.h>

void add(int *a, int *b)
{
	*a = *a + *b;
}
void sub(int *a, int *b)
{
	*b = *a - *b;
}
void process(void (*pf) (int *, int *), int *x, int *y)
{
	(*pf)(x, y);
}

int main(void)
{
	int a = 12, b = 4;
	process(add, &a, &b);
	printf("a = %d b = %d \n", a, b);
	
	a = 12;
	b = 4;
	
	process(sub, &a, &b);
	printf("a = %d b = %d \n", a, b);
}
