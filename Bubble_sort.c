#include <stdio.h>

int main(void)
{
	int a[5];
	int i, j;
	int temp;
	
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	
	for(i = 0;i < 5-1;i++)
    {
		for(j = 0;j < 5-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
	printf("%d %d %d %d %d", a[0], a[1], a[2], a[3], a[4]);
}
