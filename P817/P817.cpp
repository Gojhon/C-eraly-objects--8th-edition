// P817.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<string>
#include<iostream>

int main()
{
	std::string greeting;
	std::string name("william Smith");

	greeting = "Hello ";
	std::cout << greeting << name << std::endl;

    return 0;
}

