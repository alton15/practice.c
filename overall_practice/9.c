#include <stdio.h>
#include <stdbool.h>

main()
{
	int a=1, b=1;
	
	bool c = a!=b; 
	
	printf("%d\n",c);
	if(a!=b){
		printf("a�� b�� �ٸ��ϴ�.");
	}
	else{
		printf("a�� b�� �����ϴ�.");
	}
}
