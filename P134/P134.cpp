// P134.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

int main()
{
	unsigned seed;

	std::cout << "Enter a seed value ";
	std::cin >> seed;
	srand(seed);

	std::cout << rand() << "     ";
	std::cout << rand() << "     ";
	std::cout << rand() << std::endl;
	return 0;
}

