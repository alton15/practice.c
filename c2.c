#include <stdio.h>

int main(void)
{
	int n = 1, s = 1;
	
	while(1)
	{
		n += 1;
		s += n;
		if(n == 10)
		{
			break;
		}
	}
	printf("%d", s);
}
