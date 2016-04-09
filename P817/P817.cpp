// P817.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<string>
#include<iostream>

int main()
{
	std::string greeting; //문자열 변수 greeting을만든다.
	std::string name("william Smith");//문자열 변수 name을 만들고william Smith을 할당한다. .

	greeting = "Hello ";//문자열 변수 greeting에 hello를 할당한다.
	std::cout << greeting << name << std::endl; //출력한다.

    return 0;
}

