// P750.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

