// P223.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

const int ADULT_MEAL_COST = 6.25;

int main()
{
	int numAdults,
		numChildren;

	double adultMealToal, childMealTotal,
		totalMealcost;

	std::cout << "This Program Calculates Total cost " << "For a buffet luncheon" << std::endl;
	std::cout << "Enter the number of adult Guests (Age 12 and over)" << std::endl;
	std::cin >> numAdults;
	std::cout << "Enter the number of child guests(age2-11)" << std::endl;
	std::cin >> numChildren;

	adultMealToal = numAdults*ADULT_MEAL_COST;
	childMealTotal = numChildren*ADULT_MEAL_COST*.75;
	totalMealcost = adultMealToal+childMealTotal;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << std::endl << "Total buffet cost is $ " << totalMealcost << std::endl;

    return 0;
}

