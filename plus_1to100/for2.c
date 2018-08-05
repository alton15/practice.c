#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	
	for(a=1; a<=100; a++)
	{
		b+=a;
	}
	printf("%d", b);
}
