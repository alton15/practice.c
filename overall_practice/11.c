#include <stdio.h>

int main(void)
{
	unsigned int num,sum=0,i=0;
	for(;;++i){
		scanf("%u", &num);
		if(num > 100) break; 
		sum+= num;
	}
	printf("�հ�: %u��\n",sum);
	printf("���: %.1f\n",(double)sum/i);
}
