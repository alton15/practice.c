#include <stdio.h>

int main(void)
{
	int a, b, c;
	double x, y, z;
	
	printf("*** ���� ���� ��� ���α׷� ***\n");
	
	printf("�߰���� �ݿ������� ���� ������ �Է��ϼ��� : ");
	scanf("%lf %d", &x, &a);
	
	printf("�⸻��� �ݿ������� ���� ������ �Է��ϼ��� : ");
	scanf("%lf %d", &y, &b);
	
	printf("������ �ݿ������� ���� ������ �Է��ϼ��� : ");
	scanf("%lf %d", &z, &c);
	
	printf("������ %.1lf�Դϴ�.", x*a+y*b+z*c);
}
