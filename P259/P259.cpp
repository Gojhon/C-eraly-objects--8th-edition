// P259.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

int main()
{
	int num, lastNum;

	std::cout << "This Program will display a table of integer" << std::endl;
	std::cout << "number and their squares, starting with 1" << std::endl;
	std::cout << "What should the last number be?" << std::endl;
	std::cout << "Enter an integer between 2 and 10 : " << std::endl;

	std::cin >> lastNum;

	while ((lastNum<2)||(lastNum>10))
	{
		std::cout << "Please enter an integer between 2 and 10 : ";
		std::cin >> lastNum;
	}
	std::cout << std::endl;
	std::cout << "Number Square" << std::endl;
	std::cout << "------------" << std::endl;
	
	num = 1;

	while (num <= lastNum)
	{
		std::cout << std::setw(4) << num << std::setw(7) << (num*num) << std::endl;
		num++;
	}

    return 0;
}

