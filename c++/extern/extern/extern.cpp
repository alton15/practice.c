// extern.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

extern int x, y;

int main()
{
	int a = 10, b = 5;
	cout << x * y;
	cout << a * b;
}

