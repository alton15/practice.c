#include <stdio.h>

int main(void)
{
	int f[10];
	int i, a;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &f[i]);		//�迭�� ���ϴ� �� 10�� �Է� 
	}
	
	scanf("%d", &a);		//�� ��° ���� ���ϴ��� �Է� 
	
	printf("%d", f[a - 1]);  
}
