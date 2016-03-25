// P560.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<iomanip>

int main()
{
	std::vector<int>hours;
	std::vector<double>payRate;
	double grossPay;
	int numEmployees;
	int index;

	std::cout << "How Many Employees do you Have? ";
	std::cin >> numEmployees;

	std::cout << "Enter the hours worked and hourly pay Rates of the" << 
		numEmployees << "Employees"<< std::endl;

	for (index = 0; index < numEmployees; index++)
	{
		int tempHours;
		double tempRate;

		std::cout << "Hours worked by Employee #" << (index + 1) << ": ";
		std::cin >> tempHours;
		hours.push_back(tempHours);
		std::cout << "Hourly Pay rate for Employee #" << (index + 1) << ":";
		std::cin >> tempRate;
		payRate.push_back(tempRate);
	}
	std::cout << std::endl << "Here is the Gross pay for each employee: " << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	for (index = 0; index < numEmployees; index++)
	{
		grossPay = hours[index] * payRate[index];
		std::cout << "Employee # " << (index + 1);
		std::cout << ": $" << std::setw(7) << grossPay << std::endl;
	}
    return 0;
}

