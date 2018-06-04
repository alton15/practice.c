#include <stdio.h>

int main(void)
{
	char *ptr = "programing", *str;
	
	str = ptr;
	
	while(*str != '\0')
	{
		str++;
	}
	
	printf("%d", str - ptr);
}
