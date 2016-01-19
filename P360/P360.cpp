// P360.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

const double PAY_RATE = 22.55;
const double BASE_HOURS = 40.0;
const double OT_MULTIPLIER = 1.5;

double getBasePay(double);
double getOvertimepay(double);

int main()
{
	double hours,
		basePay,
		overtimePay = 0.0,
		totalPay;

	std::cout << " How many hours did you work? ";
	std::cin >> hours;

	basePay = getBasePay(hours);

	if (hours > BASE_HOURS)
		overtimePay = getOvertimepay(hours);

	totalPay = basePay + overtimePay;

	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << "Base Pay $ " << std::setw(7) << basePay << std::endl;
	std::cout << "Overtime Pat$ " << std::setw(7) << overtimePay << std::endl;
	std::cout << "Total Pay $" << std::setw(7) << totalPay << std::endl;
    return 0;
}

double getBasePay(double hoursWorked)
{
	double basePay;
	
	if (hoursWorked > BASE_HOURS)
		basePay = BASE_HOURS*PAY_RATE;
	else
		basePay = hoursWorked*PAY_RATE;
	
	return basePay;
}

double getOvertimepay(double hoursWorked)
{

	double overtimePay;

	if (hoursWorked > BASE_HOURS)
	{
		overtimePay=(hoursWorked - BASE_HOURS)*PAY_RATE*OT_MULTIPLIER;

	}
	else
		overtimePay = 0.0;
	
	return overtimePay;
}