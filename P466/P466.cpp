// P466.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

union PaySource
{
	short houre;
	float sales;
};
int main()
{
	const double COMMISSION_PCT = .10;

	PaySource employeel;

	char hourlyType;

	float payRate, grossPay;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "This Program Calculates either Hourly wages or " << "sales commission" << std::endl;
	std::cout << "Is this an Hourly employee(Y or N)?";
	std::cin >> hourlyType;

	if (hourlyType == 'Y' || hourlyType == 'y')
	{
		std::cout << "What is the Hourly pay rate? ";
		std::cin >> payRate;
		std::cout << "How many Hours were worked?";
		std::cin >> employeel.houre;
		grossPay = employeel.houre *payRate;
		std::cout << "Gross Pay : $ " << grossPay << std::endl;
	}
	else
	{
		std::cout << "What are the total Sales for this employee?";
		std::cin >> employeel.sales;
		grossPay = employeel.sales*COMMISSION_PCT;
		std::cout << "Gross Pay : $" << grossPay << std::endl;
	}

	return 0;
}

