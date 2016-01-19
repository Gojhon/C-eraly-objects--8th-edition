// P9.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{

	double houre, rate, pay;
	std::cout << "How many hours did you work";
	std::cin >> houre;
	
	std::cout << "How much do you get paid per hour?";
	std::cin >> rate;

	pay = houre*rate;

	std::cout << "You have earned $" << pay << std::endl;


    return 0;
}

