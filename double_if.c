#include <stdio.h>

int main(void)
{
	double a, b;
	
	scanf("%lf %lf", &a, &b);
	
	if(a >= 4)
	{
		if(b >= 4)
		{
			printf("A");
		}
		else
		{
			printf("B");
		}
	}
	else
	{
		if(b >= 4)
		{
			printf("B");
		}
		else
		{
			printf("C");
		 } 
	}
}
