#include <stdio.h>
int main(void)
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	/*
	(a>=b) ? printf("책을 구입한다.") : printf("책을 구입하지 못합니다.");
	*/
	if(a>=b)
	{
		printf("책을 구입한다.");
	}
	else
	{
		printf("책을 구입하지 못합니다.");
	} 
	
	 
}
