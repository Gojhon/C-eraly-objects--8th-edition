// P14.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double houre,rate,pay;
	std::cout << "How many houre did you Work ";
	std::cin >> houre;

	std::cout << "How much do you get paid per hour ";
	std::cin >> rate;

	pay = houre*rate;
	std::cout << "You have earned $" << pay << std::endl;

    return 0;
}

