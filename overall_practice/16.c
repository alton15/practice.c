#include <stdio.h>
int main(void)
{
	int a, b;
	
	scanf("%d", &a);
	
	b=(0==a%4 && 0!=a%100 || 0==a%400 );
	printf("%d", b);
}
