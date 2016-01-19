// P264.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
int main()
{
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	int choice, months;
	double charges;

	do {
		std::cout << std::endl << "Health Club Membership Menu " << std::endl;
		std::cout << std::endl << "1. standard Adult Membership " << std::endl;
		std::cout << std::endl << "2. Child Membership " << std::endl;
		std::cout << std::endl << "3. Senior Citizen Membership " << std::endl;
		std::cout << std::endl << "4. QUit the Program " << std::endl;
		std::cout << "Enter Your Choice" << std::endl;
		std::cin >> choice;
		while ((choice < 1) || (choice>4))
		{
			std::cout << "Please enter 1,2,3, or 4";
			std::cin >> choice;
		}
		if (choice != 4)
		{
			std::cout << "For how many months?";
			std::cin >> months;
			switch (choice)
			{
			case 1: charges = months*ADULT_RATE;
				break;
			case 2: charges = months*CHILD_RATE;
				break;
			case 3: charges = months*SENIOR_RATE;
				break;
			}
			std::cout << std::fixed << std::showpoint << std::setprecision(2);
			std::cout << "The total charges are $" << charges << std::endl;
		}
	} while (choice !=4);

    return 0;
}

