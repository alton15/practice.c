#include <stdio.h>
#include <stdbool.h>

main()
{
	int a=1, b=1;
	
	bool c = a!=b; 
	
	printf("%d\n",c);
	if(a!=b){
		printf("a와 b가 다릅니다.");
	}
	else{
		printf("a와 b가 같습니다.");
	}
}
