#include <stdio.h>

int main(void)
{
	int f[10];
	int i, a;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &f[i]);		//배열에 원하는 수 10개 입력 
	}
	
	scanf("%d", &a);		//몇 번째 수를 원하는지 입력 
	
	printf("%d", f[a - 1]);  
}
