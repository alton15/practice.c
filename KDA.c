#include <stdio.h>

struct Calculator
{
	int kill;
	int death;
	int assist;
	float kda;
} a;
int main(void)
{
	scanf("%d %d %d", &a.kill, &a.death, &a.assist);
	
	printf("\n%d %d %d\n", a.kill, a.death, a.assist);
	
	a.kda  = ((float)a.kill + (float)a.assist) / (float)a.death;
	
	printf("Your KDA figure is %.2f", a.kda);
}
