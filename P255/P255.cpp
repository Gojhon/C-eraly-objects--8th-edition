// P255.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int num = 4;
	
	std::cout << num << "  ";
	std::cout << num++ << "  ";
	std::cout << num << "  ";
	std::cout << ++num << std::endl;

	std::cout << num << "  ";
	std::cout << num-- << "  ";
	std::cout << num << "  ";
	std::cout << --num << std::endl<<std::endl;

	return 0;
}

