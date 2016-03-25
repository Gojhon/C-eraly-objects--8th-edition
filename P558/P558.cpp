// P558.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<iomanip>

int main()
{
	const int NUM_EMPS = 5;
	std::vector <int> houres(NUM_EMPS);
	std::vector<double> payRate(NUM_EMPS);
	
	double grossPay;
	int index;

	std::cout << "Enter the hours worked and Hourly Pay Rates of" << NUM_EMPS << "employees" << std::endl;

	for (index = 0; index < NUM_EMPS; index++)
	{
		std::cout << "Hours Worked by employee #" << (index + 1) << ":";
		std::cin >> houres[index];
		std::cout << "Hourly Pay rate for employee # " << (index + 1) << ":";
		std::cin >> payRate[index];
	}
	std::cout << std::endl << "Here is the Gross Pay for each Employee : " << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	for (index = 0; index <NUM_EMPS; index++)
	{
		grossPay = houres[index] * payRate[index];
		std::cout << "Employee #" << (index + 1);
		std::cout << ": $" << std::setw(7) << grossPay << std::endl;
	}
    return 0;
}

