// const.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#define size_d 100
const int size_c = 200;

int main()
{
	int x = 2, yd;
	yd = x * size_d;
	
	cout << "yd = " << yd << "\n";

	int yc;
	yc = x * size_c;
	cout << "yc = " << yc << "\n";
}

