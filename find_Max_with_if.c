#include <stdio.h>

int main(void)
{
	int a, b, c, max;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a >= b)
	{
		if(a >= c)
		{
			max = a;
		}
		else
		{
			max = c;
		}
	}
	else if(b >= a)
	{
		if(b >= c)
		{
			max = b;
		}
		else
		{
			max = c;
		}
	}
	else if(c >= b)
	{
		if(c >= a)
		{
			max = c;
		}
		else
		{
			max = a;
		}
	}
	
	printf("%d", max);
	
	return 0;
}
