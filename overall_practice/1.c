#include <stdio.h>
int main(void)
{
	int a;
	char n[11];
	char b[2];
	double bo;
	
	printf("이름을 입력하세요 : ");
	scanf("%s", &n);
	
	printf("나이를 입력하세요 : ");
	scanf("%d", &a);
	
	printf("부서코드를 입력하세요 (A ~ D) : ");
	scanf("%s", &b);
	
	printf("보안키를 입력하세요 : ");
	scanf("%lf", &bo);
	
	printf("******************************\n");
	printf(" 이름 : %s\n", n);
	printf(" 나이 : %d\n", a);
	printf(" 부서코드 : %s\n", b);
	printf(" 보안키 : %lf\n", bo);
	printf("******************************\n");
	
	return 0;
}
