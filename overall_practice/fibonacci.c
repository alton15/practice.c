#include <stdio.h>

int Fb(int num){
	if(num == 0) return 0;
    if(num == 1) return 1;
	return Fb(num - 1) + Fb(num-2);
}

int main(void){
    int num = 8;
	int i;
    for(i = 0 ; i < num ; i++ ){
        printf("%d " , Fb(i));
    }
}
