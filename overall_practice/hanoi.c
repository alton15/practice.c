#include <stdio.h>

void move(int from, int to){
    printf("%d¿¡¼­ %d \n", from, to);
}

void hanoi(int n, int from, int by, int to){
    if (n == 1)
        move(from, to);
    else{
        hanoi(n - 1, from, to, by);
        move(from, to);
        hanoi(n - 1, by, from, to);
    }
}

int main(void) {
	int a = 64;
	hanoi(a, 1, 2, 3);
}
