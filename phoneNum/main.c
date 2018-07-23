#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"

enum{INPUT = 1, SHOWALL, QUIT};

int main(void)
{
	int inputMenu = 0;
	
	while(1)
	{
		ShowMenu();
		fputs("선택하세요: ", stdout);
		scanf("%d", &inputMenu);
		getchar();
		
		switch(inputMenu)
		{
			case INPUT:
				InputPhoneData();
				break;
				
			case SHOWALL:
				ShowAllData();
				break;
		}
		
		if(inputMenu == QUIT)
		{
			puts("감사합니다.");
			break;
		}
	}
	return 0;
}
