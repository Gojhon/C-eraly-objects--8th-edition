// P280.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

int main()
{
	double number;

	std::cout << "Enter 5 Positive numers Separated by spaces and" << std::endl;
	std::cout << "I will find their Square roots : ";

	for (int count = 1; count <= 5; count++)
	{
		std::cin >> number;
		if (number >= 0.0)
		{
			std::cout << std::endl << " " << "The Square root of " << number << " is " << sqrt(number);
		}
		else
		{
			std::cout << std::endl << std::endl << number << " is negative. " << " I cannot find he square root" << std::endl;
			std::cout << "of a negative number. The Program is Terminating " << std::endl;
			break;
		}
	}
    return 0;
}

