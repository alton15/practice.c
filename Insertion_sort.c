#include <stdio.h>

int main(void)
{    
    int a[10] = {10, 20, 11, 12, 14, 1, 64, 26, 9, 19};
    int i, j , temp;
    
    for(i = 1; i < 10; i++)
    {
        temp = a[i];
        j = i - 1;
        
        while(j >= 0 && a[j] > temp)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
    for(i = 0; i < 10; i++)
    printf("%d ", a[i]);
}

