#include <stdio.h>

void swap(double *pa, double *pb)
{
	double temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line_up(double *max, double *mid, double *min)
{
	if(*max < *mid)
	{
		if(*mid < *min)
		{
			swap(max, min);
		}
		else
		{
			swap(max, mid);
		}
	}
	else
	{
		if(*max < *min)
		{
			swap(max, mid);
			swap(max, min);
		}
	}
}
	
int main()
{
	double max, mid, min;
	
	printf("실수값 세 개 입력 : ");
	
	scanf("%lf %lf %lf", &max, &mid, &min);
	
	line_up(&max, &mid, &min);
	
	printf("정렬된 값 출력 : %.1f, %.1f, %.1f\n", max, mid, min);
	
	return 0;
}

