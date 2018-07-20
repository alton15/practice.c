#include <stdio.h>

int main(void)
{
	int a;
	char b;
	
	scanf("%c %d", &b, &a);
	
	if(a >= 18)
	{
		switch (b)
		{
			case 'M' : printf("MAN");
				break;
			case 'F' : printf("WOMAN");
				break;
		}
	}
	else
	{
		switch (b)
		{
			case 'M' : printf("BOY");
				break;
			case 'F' : printf("GIRL");
				break;
		}
	}
}
