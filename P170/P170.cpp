// P170.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int number;
	std::cout << "Enter an integer and I will tell you if it " << std::endl;
	std::cout << "Is odd or even";
	std::cin >> number;

	if (number % 2 == 0)
		std::cout << number << " Is even" << std::endl;
	else
		std::cout << number << "is odd" << std::endl;

		return 0;
}

