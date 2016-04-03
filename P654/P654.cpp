// P654.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
void getNumber(int *);
void doubleValue(int *);


int main()
{
	int number; //int 형 변수 number를 생성한다.
	getNumber(&number); //getnumber 함수를 호출하고 number의 주소값을 넘긴다.
	doubleValue(&number);//doubleValue 함수를 호출하고 number의 주소값을 넘긴다.
	std::cout << "That value doubled is " << number << std::endl;
	//메인에서 number의 값을 호출한다.
    return 0;
}

void getNumber(int *input)
{
	//int 형 변수 포인터 input을 생성하고 number의 주소값을 받는다.
	std::cout << "Enter an integer number: ";
	std::cin >> *input;
	//int형 포인터 input에 값을 입력한다.
}

void doubleValue(int *val)
{
	//number의 주소값을 int형 포인터 val에 주소값을 받고
	//val 값에 곱하기 2를 한다.
	*val *= 2;
}