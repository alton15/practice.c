#include <stdio.h>

int main(void)
{
	static char str[] = "1234567890";
	
	char *p1 = str;
	char *p2 = &str[3];
	
	while(p1 < p2)
	{
		printf("%s\n", p1++);
	}
}
