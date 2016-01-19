// P192.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const double Min_INCOME = 35000.0;
	const int MIN_YEARS = 5;

	double income;
	int years;

	std::cout << "What is your annual Income?";
	std::cin >> income;
	std::cout << "How many Years have you worked at your current Job? ";
	std::cin >> years;
	if (!(income >= Min_INCOME || years > MIN_YEARS))
	{
		std::cout << std::endl << "You must earn at least $ " << Min_INCOME << " or have been employed" << std::endl;
		std::cout << "for more than " << MIN_YEARS << " Years " << " to qualify for a loan" << std::endl;

	}
	else
		std::cout << "You qualify for a loan " << std::endl;



    return 0;
}

