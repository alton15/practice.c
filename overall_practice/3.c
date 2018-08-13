#include <stdio.h>

int main(void)
{
	int a, b, c;
	double x, y, z;
	
	printf("*** 과목별 점수 계산 프로그램 ***\n");
	
	printf("중간고사 반영비율과 받은 점수를 입력하세요 : ");
	scanf("%lf %d", &x, &a);
	
	printf("기말고사 반영비율과 받은 점수를 입력하세요 : ");
	scanf("%lf %d", &y, &b);
	
	printf("수행평가 반영비율과 받은 점수를 입력하세요 : ");
	scanf("%lf %d", &z, &c);
	
	printf("점수는 %.1lf입니다.", x*a+y*b+z*c);
}
