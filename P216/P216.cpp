// P216.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice;
	int months;
	double charges;

	std::cout << " Health Club Membership Menu" << std::endl;
	std::cout << "1.Standard Adult MemberShip " << std::endl;
	std::cout << "2.Child MemberShip " << std::endl;
	std::cout << "3.Senior Citizen MemberShip " << std::endl;
	std::cout << "4.Quit the Program" << std::endl;
	std::cout << "Enter Your Choice: ";
	
	std::cin >> choice;
	if (choice >= 1 && choice <= 3)
	{
		std::cout << "For how many Months? ";
		std::cin >> months;

		switch (choice)
		{
		case 1: charges = months*ADULT_RATE;
			break;
		case 2: charges = months*CHILD_RATE;
			break;
		case 3: charges = months*SENIOR_RATE;
		}
			std::cout << std::fixed << std::showpoint << std::setprecision(2);
			std::cout << "The total charges are $ " << charges << std::endl;
		
	}
	else if (choice!=4)
	{
		std::cout << "The Valid choice are 1 through 4" << std::endl;
		std::cout << "RUn thr Program again and select one of These " << std::endl;
	}

    return 0;
}

