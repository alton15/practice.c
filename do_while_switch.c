#include <stdio.h>

int main(void)
{
	int a;
	
	do
	{
		printf("\n1. 입력하기\n2. 출력하기\n3. 삭제하기\n4. 끝내기\n");
		
		printf("작업할 번호를 선택하세요.\n");
		
		scanf("%d", &a);
		
		switch(a)
		{
			case 1 : printf("입력을 선택하였습니다.\n");
				break;
			case 2 : printf("출력을 선택하였습니다.\n");
				break;
			case 3 : printf("삭제를 선택하였습니다.\n");
				break;
			case 4 : printf("끝내기를 선택하였습니다.\n");
				break;
			default : printf("잘못 선택하였습니다.\n");
				break; 
		}
	} while(a != 4);
}
