#include <stdio.h>

int main(void) 
{
	int i, j, c = 1;
	float sum = 0;
	
	printf("%d ", 1);
	for(i = 1; i <= 1000; i++) {
		for(j = 2; j < i; j++) {
			if((i % j) == 0) {
				break;
			}
		}
		if(i == j) {
			printf("%d ", i);
			c++;
		}
	}
	printf("\n1~1000에서 소수는 %d개다.", c);
}
