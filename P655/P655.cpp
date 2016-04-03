// P655.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iomanip>
#include<iostream>
void getSales(double *sales, int size);
double totalSales(double *sales, int size);

int main()
{
	const int QUARTES = 4;
	double sales[QUARTES];
	getSales(sales, QUARTES);
	std::cout << std::setprecision(2);
	std::cout << std::fixed << std::showpoint;
	std::cout << "The total sales for the year are $";
	std::cout << totalSales(sales, QUARTES) << std::endl;

    return 0;
}

void getSales(double *array, int size)
{
	for (int count = 0; count < size; count++)
	{
		std::cout << "Enter the sales figurre for quarter ";
		std::cout << (count + 1) << ": ";
		std::cin >> array[count];
	}
}


double totalSales(double *array, int size)
{
	double sum = 0.0;
	for (int count = 0; count < size; count++)
	{
		sum += *array;
		array++;
	}
	return sum;
}