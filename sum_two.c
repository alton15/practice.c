#include <stdio.h>

int sum(int *m, int *k);

int main(void)
{
	int m, k, c;
	//m�� ������ ���Ѵ�. k�� ������ �����Ѵ�. 
	scanf("%d %d", &m, &k);
	
	printf("%d %d %d\n", m, k, sum(&m, &k)); //�� ��° �� ��� 
}

int sum(int *m, int *k)
{
	int c;
	++*m;
	++*k;
	c = *m + *k;
	
	printf("%d %d %d\n", *m, *k, c); //ù ��° �� ���
	
	return c; 
}
