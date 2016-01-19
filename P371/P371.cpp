// P371.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

void getNum(int &);
int doubleNum(int);

int main()
{
	int value; //변수 value 를 생성 

	getNum(value); //getNum 함수에 value를 전달한다.
	//getNum에서 주소값으로 인자를 받았기 때문에 Main함수에도 value값은 변경됨
	value = doubleNum(value);
	//doubleNum의 리턴된 값을 value에 대입시킨다.
	std::cout << "That value doubled is " << value << std::endl;

    return 0;
}

void getNum(int &usernum) //getNum함수는 value의 주소명으로 받는다 
{
	std::cout << "Enter a number: ";
	std::cin >> usernum; //value에 값을 넣는다. 
}

int doubleNum(int number) //doubleNum 함수는value 값 int number로 받는다.
{
	return number * 2; //int number에 곱하기 2를 하고 값을 메인 함수로 출력(리턴)한다.
}