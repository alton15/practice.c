// static.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void number_return() {
	int x = 0; //정적 변수
	static int y = 0; //정적 변수
	x++;
	y++;
	cout << "x값: " << x << " y값: " << y << "\n";
}

int main()
{
	int i;
	for (i = 0; i < 3; i++) {
		number_return();
	}
}

