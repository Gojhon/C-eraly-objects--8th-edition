// P273.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
int main()
{
	int numDays;
	double dailySale, totalSales = 0.0, averageSales;

	std::cout << "For How many days do you have Sales Figures" << std::endl;
	std::cin >> numDays;

	for (int day = 1; day <= numDays; day++)
	{
		std::cout << "Enter the Sales for day" << day << ": ";
		std::cin >> dailySale;
		totalSales += dailySale;
	}
	averageSales = totalSales / numDays;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << std::endl << "Total Sales:     $ " << std::setw(8) << totalSales;
	std::cout << std::endl << "Average daily sales: $ " << std::setw(8) << averageSales << std::endl;
	return 0;
}

