#include <stdio.h>

int main(void)
{
	int Mit, Nop;
	double Nurb;
	char ST;
	
	do
	{
		printf("삼각형의 밑변과 높이를 쓰시오.\n");
		scanf("%d %d", &Mit, &Nop);
		
		Nurb = Mit * Nop / 2;
	
		printf("%.1lf\n", Nurb);
		
		printf("계속하시겠습니까? Y/N\n");
		scanf("\n%c", &ST);
	} while(ST == 'Y' || ST == 'y');
}
