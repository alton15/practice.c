#include <stdio.h>
int main(void)
{
	int a=0, b=0;
	
	do{
		printf("���� a�� ���� %d�Դϴ�. \n", a+=b);
		b++;
	} while (b<=100);
}
