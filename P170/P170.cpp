// P170.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int number;
	std::cout << "Enter an integer and I will tell you if it " << std::endl;
	std::cout << "Is odd or even";
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << number << " Is even" << std::endl;
	else
		std::cout << number << "is odd" << std::endl;

		return 0;
}

