#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"

enum{INPUT = 1, SHOWALL, SEARCH, DELETE, QUIT};

int main(void)
{
	int inputMenu = 0;
	
	while(1)
	{
		ShowMenu();
		fputs("�����ϼ���: ", stdout);
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
				
			case SEARCH:
				SearchPhoneData();
				break;
				
			case DELETE:
				DeletePhoneData();
				break;
		}
		
		if(inputMenu == QUIT)
		{
			puts("�����մϴ�.");
			break;
		}
	}
	return 0;
}
