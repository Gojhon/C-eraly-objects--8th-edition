// P268.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
int main()
{
	int num;
	std::cout << "Number Square" << std::endl;
	std::cout << "-------------" << std::endl;

	for (num = 1; num <= 5; num++)
	{
		std::cout << std::setw(4) << num << std::setw(7) << (num*num) << std::endl;
	}
    return 0;
}

