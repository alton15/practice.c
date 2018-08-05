#include <stdio.h>
int main(void)
{
	int a=0, b=0;
	
	do{
		printf("현재 a의 값은 %d입니다. \n", a+=b);
		b++;
	} while (b<=100);
}
