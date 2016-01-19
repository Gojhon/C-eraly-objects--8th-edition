// P352.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>

void displayMenu();
int getChoice();
void showFees(std::string category, double rate, int months);

int main()
{
	const double ADULT_RATE = 120.0,
		CHILD_RATE = 60.0,
		SENIOR_RATE = 100.0;

	int choice, months;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	do
	{
		displayMenu();
		choice = getChoice();
		if (choice != 4)
		{
			std::cout << "For how many months?";
			std::cin >> months;
			switch (choice)
			{
			case 1: showFees("Adult", ADULT_RATE, months);
				break;
			case 2: showFees("child", CHILD_RATE, months);
				break;
			case 3: showFees("Senior", SENIOR_RATE, months);
				break;
			}
		}
	} while (choice != 4);
    return 0;
}

void displayMenu()
{
	system("cls"); // 출력한 화면을 지운다.
	std::cout << std::endl << "Health Club Membership menu " << std::endl;
	std::cout << std::endl << "1. Standard Adult Membrship" << std::endl;
	std::cout << std::endl << "2. Child Membership" << std::endl;
	std::cout << std::endl << "3. Senior Citizen Membership" << std::endl;
	std::cout << std::endl << "4. Quit the Program " << std::endl << std::endl;
}
int getChoice()
{
	int choice;
	std::cin >> choice;

	while (choice<1 || choice>4)
	{
		std::cout << "The only Valid choices are 1-4. Please re-enter.";
		std::cin >> choice;
	}
	return choice;
}

void showFees(std::string memberType, double rate, int months)
{
	std::cout << std::endl;
	std::cout << "Membership Type : " << memberType << "   " << "Number of months: " << months << std::endl;
	std::cout << "Total charges   : " << (rate*months) << std::endl;

	std::cout << std::endl;
	std::cout << "Press the Enter key to return to the menu ";
	std::cin.get();
	std::cin.get();
}