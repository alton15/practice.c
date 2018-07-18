#include <stdio.h>
#define SIZE 10
int main(void)
{
	int a=50, b=100;
	
	(a>b) ? printf("a = %d\n", a+=SIZE) : printf("b = %d\n", b-=SIZE);
}
