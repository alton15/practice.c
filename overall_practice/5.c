#include <stdio.h>
int main(void)
{
	int a;
	
	printf("���͸� �Է��ϼ���.\n");
	scanf("%d", &a);
	
	printf("%dkm %dm", a/1000, a%1000);
}
