#include <stdio.h>
int main(void)
{
	int a;
	
	printf("미터를 입력하세요.\n");
	scanf("%d", &a);
	
	printf("%dkm %dm", a/1000, a%1000);
}
