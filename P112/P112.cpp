// P112.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{

	double number1 = 132.364, number2 = 26.91;
	double quotient = number1 / number2;

	std::cout << quotient << std::endl;
	std::cout << std::setprecision(5) << quotient << std::endl;
	std::cout << std::setprecision(4) << quotient << std::endl;
	std::cout << std::setprecision(3) << quotient << std::endl;
	std::cout << std::setprecision(2) << quotient << std::endl;
	std::cout << std::setprecision(1) << quotient << std::endl;

    return 0;
}

