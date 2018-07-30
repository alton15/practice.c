#include <stdio.h>

int main(void)
{
	FILE *fp1 = fopen("document.txt", "r");
	FILE *fp2 = fopen("result.txt", "w");
	char le;
	
	while( fscanf(fp1, "%c", &le) != EOF)
	{
		if(le >= 'a' && le <= 'z')
		{
			fprintf(fp2, "%c", le - 32);
		}
		else
		{
			fprintf(fp2, "%c", le);
		}
	}
	
	fclose(fp1);
	fclose(fp2);
	
}
