// P532.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

int main()
{
	const int Num_Emps = 5;
	int index;
	int hours[Num_Emps];
	double PayRate[Num_Emps];
	double grossPay;

	std::cout << "Enter the hours worked and hourly pay rates of " << Num_Emps << " employees" << std::endl;

	for (index = 0; index < Num_Emps; index++)
	{
		std::cout << "Hours worked by employee # " << (index + 1) << " : ";
		std::cin >> hours[index];
		std::cout << "Hourly pay rate for employee #" << (index + 1) << " : ";
		std::cin >> PayRate[index];
	}
	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	for (index = 0; index < Num_Emps; index++)
	{
		grossPay = hours[index] * PayRate[index];
		std::cout << "Employee #" << (index + 1);
		std::cout << " : $" << std::setw(7) << grossPay << std::endl;
	}
    return 0;
}

