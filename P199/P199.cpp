// P199.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int number;
	std::cout << "Enter a number greater than 0: ";
	std::cin >> number;

	if (number > 0)
	{
		int number;
		std::cout << "Now enter another number ";
		std::cin>>number;
		std::cout << "The Second number you entered was ";
		std::cout << number<<std::endl;
	}
	std::cout << "Your First number was " << number << std::endl;

    return 0;
}

