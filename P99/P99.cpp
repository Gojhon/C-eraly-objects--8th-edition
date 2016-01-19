// P99.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	short intvar = 32767;
	std::cout << "Oriinal value of intVar   " << intvar << std::endl;

	intvar = intvar + 1;
	std::cout << "intVar after Overflow     " << intvar << std::endl;

	intvar = intvar - 1;
	std::cout << "intVar after 2nd Overflow" << intvar << std::endl;

	float floatVar = 3.0E-47;
	std::cout << "Value of very tiny floatvar  " << floatVar << std::endl;


    return 0;
}

