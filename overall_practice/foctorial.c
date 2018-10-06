#include <stdio.h>

int FT(int a) {
	int f;
	if(a == 1) return;
	
	f = a * FT(a - 1);
}

int main(void) {
	int i = 10;
	
	printf("%d", FT(i));
}
