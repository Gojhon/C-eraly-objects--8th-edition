// P517.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<string>

int main()
{
	const int Num_Months = 12;
	int choice;
	std::string name[Num_Months] =
	{
		"January","February","March","April",
		"May","June","July","August",
		"September","October","Novemver","December"
	};
	int days[Num_Months] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	std::cout << "This Program will tell you how many days are"
		<< "in any month." << std::endl << std::endl;
	for (int month = 1; month <= Num_Months; month++)
	{
		std::cout << std::setw(2) << month << " " << name[month - 1] << std::endl;
	}
	std::cout << std::endl << "enter the number of the month you want :";
	std::cin >> choice;

	std::cout << "The month of " << name[choice - 1] << " has " << days[choice - 1] << "days." << std::endl;


    return 0;
}

