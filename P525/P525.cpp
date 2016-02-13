// P525.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<iomanip>

int main()
{
	const int num_offices = 12;
	std::ifstream dataIn;
	int office;
	double sales[num_offices],
		totalSales = 0.0,
		averageSales,
		highestSales,
		lowestSales;

	dataIn.open("sales.dat");
	if (!dataIn)
		std::cout << "Error opening data file" << std::endl;
	else
	{
		for (office = 0; office < num_offices; office++)
			dataIn >> sales[office];
		dataIn.close();

		for (office = 0; office < num_offices; office++)
			totalSales += sales[office];

		averageSales = totalSales / num_offices;

		highestSales = lowestSales = sales[0];
		for (office = 1; office < num_offices; office++)
		{
			if (sales[office] > highestSales)
				highestSales = sales[office];
			else if (sales[office] < lowestSales)
				lowestSales = sales[office];
		}
			std::cout << std::fixed << std::showpoint << std::setprecision(2);
			std::cout << "Total sales   $" << std::setw(9) << totalSales << std::endl;
			std::cout << "Average sales $" << std::setw(9) << averageSales << std::endl;
			std::cout << "Highest sales $" << std::setw(9) << highestSales << std::endl;
			std::cout << "Lowest  sales $" << std::setw(9) << lowestSales << std::endl;		
		}




	return 0;
}

