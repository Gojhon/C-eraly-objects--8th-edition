// P644.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int SIZE = 5;
	int number[SIZE];

	std::cout << "Enter " << SIZE << " numbers: ";
	for (int count = 0; count < SIZE; count++)
	{
		std::cin >> *(number + count);
	}

	std::cout << "Here are the numbers you entered:" << std::endl;

	for (int count = 0; count < SIZE; count++)
	{
		std::cout << *(number + count) << " ";
	}
	std::cout<<std::endl;
    return 0;
}

