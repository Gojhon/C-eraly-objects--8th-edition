// P350.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

bool isEven(int);

int main()
{
	int val;
	std::cout << "Enter an integer and I will tell you ";
	std::cout << "if it is eve n or odd : ";
	std::cin >> val;
	if (isEven(val))
		std::cout << val << "is even."<<std::endl;
	else
		std::cout << val << "is odd.";
		return 0;
}


bool isEven(int number)
{
	if (number % 2 == 0)
		return true;
	else
		return false;
}
