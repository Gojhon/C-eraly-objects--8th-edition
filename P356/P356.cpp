// P356.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

void anothrFunction();

int main()
{
	int num = 1;
	std::cout << "In main,num is  " << num << std::endl;
	anothrFunction();
	std::cout << "Back in main, num is still " << num << std::endl;

    return 0;
}

void anothrFunction()
{
	int num = 20;
	std::cout << "In anotherFunction, num is" << num << std::endl;
}

