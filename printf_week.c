/*#include <stdio.h>

int main(void) { 
	char week[7][3] = {"��", "ȭ", "��", "��", "��", "��", "��"};
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
	wchar_t week[7] = {L'��', L'ȭ', L'��', L'��', L'��', L'��', L'��'};
	for(i = 0; i < 7; i++) {
		wprintf(L"[%p] %c\n", &week[i], week[i]);
}
