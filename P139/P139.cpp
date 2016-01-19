// P139.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
const double PRICE_PER_CUBIC_YD = 22.00;

int main()
{
	double squareFeet;
	int depth;
	double cubicFeet, cubicYards, totalPrice;

	std::cout << "number of square feet to be covered with mulch: ";
	std::cin >> squareFeet;
	std::cout << "Number of inches deep : ";
	std::cin >> depth;

	cubicFeet = squareFeet * (depth / 12.0);
	cubicYards = cubicFeet / 27;
	totalPrice= cubicYards*PRICE_PER_CUBIC_YD;
	std::cout << std::endl << "Number of cubic yards needed: " << cubicYards << std::endl;
	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "Price per cubic yard:$ " << std::setw(7) << PRICE_PER_CUBIC_YD << std::endl;
	std::cout << "Total Price :                 $" << std::setw(7) << totalPrice << std::endl << std::endl;

    return 0;
}

