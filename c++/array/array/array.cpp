// array.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int b2[2][2];
	int i, j;
	
	b2[0][0] = 1;
	b2[0][1] = 2;
	b2[1][0] = 3;
	b2[1][1] = 4;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << b2[i][j] << "  " << "\n";
		}
	}
}

