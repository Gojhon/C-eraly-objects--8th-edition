// P245.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int number = 1;
	while (number <= 5)
	{
		std::cout << "Hello ";
		number += number;
	}

	std::cout << std::endl << "That's All" << std::endl;

    return 0;
}

