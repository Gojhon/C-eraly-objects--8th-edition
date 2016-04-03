// P750.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"Convert.h"

void printValue(IntClass);
IntClass f(int);

int main()
{
	IntClass intobject = 23;
	std::cout << "The value is " << intobject.getValue() << std::endl;

	intobject = 24;
	std::cout << "The value is " << intobject.getValue() << std::endl;

	std::cout << "The value is ";
	printValue(25);
	std::cout << std::endl;

	intobject = f(26);
	std::cout << "The value is ";
	printValue(intobject);

    return 0;
}

