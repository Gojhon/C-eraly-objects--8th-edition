// P638.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

char letter;//char형 전역변수 letter을 생성한다.
short number; //short형 전역변수 number을 생성한다.
float amount; //float형 전역변수 amount을 생성한다.
double profit; //double형 전역변수 profit을 생성한다.
char ch; //char형 전역변수 ch을 생성한다.

int main()
{
	std::cout << "Address of letter is : "<< long(&letter) <<std:: endl;
	//char 형 letter의 문자열을 long형을 형변환 하여 주소값을 출력한다.
	std::cout << "Address of number is : " << long(&number) << std::endl;
	//short 형 letter의 문자열을 long형을 형변환 하여 주소값을 출력한다.
	std::cout << "Address of amount is : "<< long(&amount) << std::endl;
	//float 형 letter의 문자열을 long형을 형변환 하여 주소값을 출력한다.
	std::cout << "Address of profit is : "<< long(&profit) << std::endl;
	//double 형 letter의 문자열을 long형을 형변환 하여 주소값을 출력한다.
	std::cout << "Address of ch is :" << long(&ch) << std::endl;
	//char 형 ch의 문자열을 long형을 형변환 하여 주소값을 출력한다.
	return 0;
}

