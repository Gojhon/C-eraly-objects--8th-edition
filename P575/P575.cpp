// P575.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
struct  Payinfo
{
	int hours;
	double payRate;
};
int main()
{

	//생성장 초기화가 멤버 초기화 보다 먼저다.
	const int NUM_EMPS = 3;
	int index;
	Payinfo workers[NUM_EMPS];
	double grossPay;

	std::cout << "Enter the hours worked and hourly pay rates of " << NUM_EMPS << " employees.";

	for (index = 0; index < NUM_EMPS; index++)
	{
		std::cout << std::endl << "Hours worked by Employee #" << (index + 1);
		std::cout << ": ";
		std::cin >> workers[index].hours;
		std::cout << "Hourly pay rate for employee #";
		std::cout << (index + 1) << ": ";
		std::cin >> workers[index].payRate;

	}
	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	for (index = 0; index < NUM_EMPS; index++)
	{
		grossPay = workers[index].hours*workers[index].payRate;
		std::cout << "employee #" << (index + 1);
		std::cout << " : $" << std::setw(7) << grossPay << std::endl;
	}

    return 0;
}

