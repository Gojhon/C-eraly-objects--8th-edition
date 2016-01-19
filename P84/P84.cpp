// P84.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double numerator, denominator;
	std::cout << "this program show the decimal value of a fraction\n";
	std::cout << "Enter the numerator";
	std::cin >> numerator;
	std::cout << "Enter the denominator :";
	std::cin >> denominator;
	std::cout << "The decimal value is " << (numerator / denominator) << std::endl;

    return 0;
}

