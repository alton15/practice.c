#include <stdio.h>

int main(void)
{
	int a = 0, num, sum = 0;
	scanf("%d", &num);
	
	if(num > 10)
	{
		printf("10 ������ ���� �Է��Ͻÿ�.");
	}
	else
	{
		while(a <= num)
		{
			sum+=a;
			a++;
		}
		printf("1���� num������ �� : %d", sum);
	}
}
