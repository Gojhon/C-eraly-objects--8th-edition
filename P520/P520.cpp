// P520.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>


int main()
{
	const int num_workers = 5;
	int hours[num_workers];
	double payRate;
	
	std::cout << "Enter the hours worked by" << std::endl;

	for (int worker = 0; worker < num_workers; worker++)
	{
		std::cout << "Employee #" << (worker + 1) << " : ";
		std::cin >> hours[worker];
	}

	std::cout << std::endl << "Enter the hourly pay rate for all the employees : ";
	std::cin >> payRate;

	std::cout << std::endl << "Here is the gross pay for each employee : " << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	for (int worker = 0; worker < num_workers; worker++)
	{
		double grossPay = hours[worker] * payRate;
		std::cout << "Employee # " << (worker + 1);
		std::cout << " : $ " << std::setw(7) << grossPay << std::endl;
	}
    return 0;
}

