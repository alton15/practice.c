#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	int i;
	
	puts("���ڿ��� �Է��ض�.\n");
	gets(str); //str�� ���ڿ��� �ִ´�.
	
	for(i = strlen(str) - 1; i >= 0; i--)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			putchar(str[i] + 'a' - 'A');
		}
		else
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				putchar(str[i] + 'A' - 'a');
			}
			else
			{
				putchar(str[i]);
			}
		}
	}
}
