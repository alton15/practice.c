// input_output.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream> //cout을 사용하기 위해 필요하다.
#include <iomanip> //조작자를 사용하기 위해서 필요하다.
using namespace std;

#define SizeName 10
const int SizeAdd = 20; //자료형 설정이 가능해 계산이 된다.

int main()
{
	/*
	int a = 4;
    //cout은 자료형을 자동으로 판단한다. scanf처럼 %d 같은걸 안써줘도 된다.
	cout << "a = " << a << endl;
	cin >> a; //a에 값을 넣는다.
	*/

	/*
	char name[SizeName];
	char address[SizeAdd];
	cin >> name;
	cin >> address;
	cout << "이름과 주소: " << name << " " << address << endl;
	*/

	/*
	int x = 12;
	int y = 1234;
	cout << "10진수: " << dec << x << endl; //dec 10진수로 변환해 표시.
	cout << "8진수: " << oct << x << endl; //oct 8진수로 변환해 표시.
	cout << "16진수: " << hex << x << endl; //hex 16진수로 변환해 표시.
	cout << "1234567890" << endl;
	cout << dec << y << endl;
	cout << setw(10) << y << endl; //setw(int n) 자리수를 n개로 해서 출력.
	*/

	/*
	float x = 12.30;
	float y = 10.0 + 2.0 / 3.0;
	cout << x << endl;
	cout << y << endl;
	cout.precision(4); //길이 4자리
	cout << x << endl;
	cout << y << endl;
	*/

	/*
	//ios::showbase = 기준접두어(0,0) 사용, uppercase = 16진 출력을 위해 대문자 사용
	//showpos = 양수 앞에 +부호 사용, showpoint = 소수점 뒤의 끝의 0을 나타냄.
	float x = 12.30;
	float y = 10.6667;
	cout.setf(ios::showpoint); //0을 나타냄
	cout << x << endl;
	cout << y << endl;
	cout.precision(4);
	cout << x << endl;
	cout << y << endl;
	int ion = 30;
	cout << "the num of ion: ";
	cout.setf(ios:: showpos);
	cout << ion << endl;
	cout << "16진수 사용\n";
	cout << hex;
	cout << ion << endl;
	cout.setf(ios::uppercase);
	cout << ion << endl;
	cout.setf(ios::showbase);
	cout << ion << endl;
	*/

	/*
	int ion = 0;
	cout << "자리 위치 지정\n";
	cout.setf(ios::showpos);
	cout.setf(ios::right, ios::adjustfield);
	cout.setf(ios::showpoint);
	
	while (ion < 3) {
		cout.width(8);
			cout << ++ion << endl;
	}
	cout.setf(ios::left, ios::adjustfield);

	while (ion > 0) {
		cout.width(8);
			cout << ion-- << endl;
	}
	cout.setf(ios::internal, ios::adjustfield);
	while (ion < 3) {
		cout.width(8);
		cout << ++ion << endl;
	}
	*/

	const int Length = 30;
	char name[Length];
	char address[Length];
	cout << "이름: ";
	cin.getline(name, Length);
	cout << "주소: ";
	cin.getline(address, Length);
	cout << "이름: " << name << endl;
	cout << "주소: " << address << endl;
}

