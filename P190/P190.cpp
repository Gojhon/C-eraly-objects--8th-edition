// P190.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const double MIN_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	double income;
	int years;
	
	std::cout << "What is your annual income ";
	std::cin >> income;
	std::cout << " How many Years have you Worked at your current job? ";
	std::cin >> years;

	if (income >= MIN_INCOME || years > MIN_YEARS)
		std::cout << "You qualify for a loan  " << std::endl;
	else
	{
		std::cout << std::endl << "You must earn at least $ " << MIN_INCOME << " or Have Been Employed" << std::endl;
		std::cout << "For more than " << MIN_INCOME << " Years " << "to qualify for a loan " << std::endl;

	}
    return 0;
}

