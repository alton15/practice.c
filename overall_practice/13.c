#include <stdio.h>
int main(void)
{
    int n;
    for (n = 1; n <= 100; n++)
    {
        if (n % 6 == 0)//6���� ����� �������� ������
        {
            printf("%d ", n);
        }
    }
    printf("\n");
 
    return 0;
}
