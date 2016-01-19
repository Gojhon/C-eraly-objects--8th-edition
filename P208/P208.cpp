// P208.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	const double PAY_RATE = 50.0;
	const int MIN_HOURS = 5;
	double hours, charges;

	std::cout << "How many hours were workde? ";
	std::cin >> hours;

	hours = hours < MIN_HOURS ? MIN_HOURS : hours;

	charges = PAY_RATE*hours;
	std::cout << std::fixed << std::showpoint << std::setprecision(2) << "The charges are $" << charges << std::endl;

    return 0;
}

