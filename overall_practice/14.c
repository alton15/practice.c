#include <stdio.h>

int main(void)
{
	int row, col, i, j;
	
	scanf("%d %d", &row, &col);
	
	for( i = 1 ; i <= row ; i ++){
		for( j = 1 ; j <= col ; j ++ ){
			printf("%d ", i*j);
		}
		printf("\n");
	}
}
