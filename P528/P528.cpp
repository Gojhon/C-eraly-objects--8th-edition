// P528.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<iomanip>
int main()
{
	const int size = 20;
	std::ifstream dataIn;
	int numoffices, count;

	double sales[size], totalSales = 0.0,
		averageSales;

	dataIn.open("sales.dat");
	if (!dataIn)
		std::cout << "Error Opening the the data file" << std::endl;
	else
	{
		count = 0;
		while (count < size&&dataIn >> sales[count])
		{
			totalSales += sales[count];
			count++;
		}
		numoffices = count;
		dataIn.close();
		averageSales = totalSales / numoffices;

		std::cout << std::fixed << std::showpoint << std::setprecision(2);
		std::cout << "The total sales are $" << std::setw(9) << totalSales << std::endl;
		std::cout << "The average sles are $" << std::setw(9) << averageSales << std::endl;
		std::cout << std::endl << "The following offices have below - average" << "Sales figures" << std::endl;

		for (int office = 0; office < numoffices; office++)
		{
			if (sales[office] < averageSales)
				std::cout << "Office " << std::setw(2) << (office + 1) << " $" << sales[office] << std::endl;
		}
	}
	return 0;
}

