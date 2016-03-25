// P542.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<iomanip>
#include <numeric>   
double sumArray(const double[], int);
double getHighest(const double[], int);
double getLowest(const double[], int);

int main()
{
	const int Num_Days = 5;
	double sales[Num_Days],
		total,average,
		highest, lowest;

	std::cout << "Enter the sales for this week" << std::endl;
	for (int day = 0; day < Num_Days; day++)
	{
		std::cout << "Day " << (day + 1) << ": ";
		std::cin >> sales[day];
	}
	total = sumArray(sales, Num_Days);
	average = total / Num_Days;
	
	highest = getHighest(sales, Num_Days);
	lowest = getLowest(sales, Num_Days);
	std::cout << "sum:" << std::accumulate(std::begin(sales), std::end(sales), 0.0)<<std::endl;
	std::cout << "max_element:" << std::max_element(std::begin(sales),std::end(sales))<<std::endl;

	std::cout << std::fixed << std::showpoint << std::setprecision(2) << std::endl;
	std::cout << "The total sales are  $" << std::setw(9) << total << std::endl;
	std::cout << "The average sales amount is $" << std::setw(9) << average << std::endl;
	std::cout << "The highest sales amount is $" << std::setw(9) << highest << std::endl;
	std::cout << "The lowest sales amount is $" << std::setw(9) << lowest << std::endl;
    return 0;
}

double sumArray(const double array[], int size)
{
	double total = 0.0;
	for (int count = 0; count < size; count++)
		total += array[count];
	return total;
}
double getHighest(const double array[], int size)
{
	double highest = array[0];
	for (int count = 1; count < size; count++)
	{
		if (array[count] > highest)
			highest = array[count];
	}
	return highest;
}
double getLowest(const double array[], int size)
{
	double lowest = array[0];
	for (int count = 1; count < size; count++)
	{
		if (array[count] < lowest)
			lowest = array[count];
	}
	return lowest;

}
