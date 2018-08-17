#include <stdio.h>
main()
{
	int intmax=2147483647;
	unsigned unintmax = 4294967295;
	
	printf("%d, %u\n", intmax, unintmax);
	
	double bd;
	scanf("%lf", &bd);
	printf("%.3lf", bd);
}
