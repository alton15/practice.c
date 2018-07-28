#include <stdio.h>

int main(void)
{
	int n = 1, a = 1;
	
	while(1)
	{
		a = 2 * a + n;
		
		if(n != 5)
		{
			n += 1;
		}
		else if(n == 5)
		{
			break;
		}
	}
	
	printf("%d", a);
}
