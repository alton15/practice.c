#include <stdio.h>
int main(void)
{
	int a;
	char n[11];
	char b[2];
	double bo;
	
	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &n);
	
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &a);
	
	printf("�μ��ڵ带 �Է��ϼ��� (A ~ D) : ");
	scanf("%s", &b);
	
	printf("����Ű�� �Է��ϼ��� : ");
	scanf("%lf", &bo);
	
	printf("******************************\n");
	printf(" �̸� : %s\n", n);
	printf(" ���� : %d\n", a);
	printf(" �μ��ڵ� : %s\n", b);
	printf(" ����Ű : %lf\n", bo);
	printf("******************************\n");
	
	return 0;
}
