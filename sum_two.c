#include <stdio.h>

int sum(int *m, int *k);

int main(void)
{
	int m, k, c;
	//m은 덧셈을 당한다. k는 덧셈을 유도한다. 
	scanf("%d %d", &m, &k);
	
	printf("%d %d %d\n", m, k, sum(&m, &k)); //두 번째 줄 출력 
}

int sum(int *m, int *k)
{
	int c;
	++*m;
	++*k;
	c = *m + *k;
	
	printf("%d %d %d\n", *m, *k, c); //첫 번째 줄 출력
	
	return c; 
}
