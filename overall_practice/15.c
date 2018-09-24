/*#include <stdio.h>

int main(void)
{
	puts("2 4 6 8 10 12 14 16 18 20\n3 6 9 12 15 18 21 24 27 30 \n4 8 12 16 20 24 28 32 36 40");
 }*/
 
#include <stdio.h>

int main(void)
{
	int num1, num2;
	
	for(num1 = 2 ; num1 <= 4 ; num1 ++){
		for(num2 = 1 ; num2 <=10 ; num2++){
			printf("%d ",num1 * num2);
		}
		printf("\n");
	}
} 
