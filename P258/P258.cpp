// P258.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>>
int main()
{
	int num = 1;
	std::cout << "Number  Square" << std::endl;
	std::cout << "--------------" << std::endl;
	while (num <= 5)
	{
		std::cout << std::setw(4) << num << std::setw(7) << (num*num) << std::endl;
		num++;
	}
    return 0;
}

