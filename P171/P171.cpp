// P171.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double num1, num2, quotient;
	std::cout << "Enter two numbers: ";
	std::cin >> num1 >> num2;

	if (num2 != 0)
	{
		quotient = num1 / num2;
		std::cout << "The quotient of " << num1 << " divided by " << num2 << " is "
			<< quotient << std::endl;
	}
	else
	{
		std::cout << "Division by zero is not possible " << std::endl;
		std::cout << "a number other than zero " << std::endl;
	}
    return 0;
}

