// P173.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

int main()
{
	double result = .666667 * 6.0;
	std::cout << "result= " << result << std::endl;

	if (abs(result - 4.0 < .00001))
		std::cout << "Result Does equal 4" << std::endl;
	else
		std::cout << "result Does not equal 4 " << std::endl;

    return 0;
}

