#include <stdio.h>

int main(void)
{
	int Mit, Nop;
	double Nurb;
	char ST;
	
	do
	{
		printf("�ﰢ���� �غ��� ���̸� ���ÿ�.\n");
		scanf("%d %d", &Mit, &Nop);
		
		Nurb = Mit * Nop / 2;
	
		printf("%.1lf\n", Nurb);
		
		printf("����Ͻðڽ��ϱ�? Y/N\n");
		scanf("\n%c", &ST);
	} while(ST == 'Y' || ST == 'y');
}
