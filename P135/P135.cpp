// P135.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	unsigned seed;

	seed = time(0);
	srand(seed);

	std::cout << rand() << "    ";
	std::cout << rand() << "    ";
	std::cout << rand() << std::endl;
	return 0;
}

