/*#include <stdio.h>

int main(void) { 
	char week[7][3] = {"월", "화", "수", "목", "금", "토", "일"};
	int i = 0;
	
	for(i = 0; i < 7; i++) {
		printf("%s ", week[i]);
	}
}
*/

#include <stdio.h>
#include <wchar.h>

int main() {
	int i;
	wchar_t week[7] = {L'월', L'화', L'수', L'목', L'금', L'토', L'일'};
	for(i = 0; i < 7; i++) {
		wprintf(L"[%p] %c\n", &week[i], week[i]);
}
