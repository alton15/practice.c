// register.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	register int i;
	for (i = 4; i > 0; i--) {
		register int j = 10;
		j *= i;
		cout << j << "\n";
	}

	cout << i << "\n";
}

