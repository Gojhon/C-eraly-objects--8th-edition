// P182.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

int main()
{

	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;

	

	std::cout << "Health Club MemberSHip Menu " << std::endl<<std::endl;
	std::cout << "1.Standard Adult Membership" << std::endl;
	std::cout << "2.CHild Membership" << std::endl;
	std::cout << "3.Senior Citizen Membership" << std::endl;
	std::cout << "4.QUit the Program" << std::endl;
	std::cout << "Enter Your Choice: ";
	
	int months;
	double charges;
	int choice;
	std::cin >> choice;
	if (choice == 1)
	{
		std::cout << "For How Many Months?";
		std::cin >> months;
		charges = months *ADULT_RATE;
		std::cout << std::endl << "The Total Charges are $" << charges << std::endl;
	}
	else if (choice == 2)
	{
		std::cout << "For How many months?";
		std::cin >> months;
		charges = months*CHILD_RATE;
		std::cout << std::endl << "Total charges are $" << charges << std::endl;
	}
	else if (choice == 3)
	{
		std::cout << "For How many Months?";
		std::cin >> months;
		charges = months*SENIOR_RATE;
		std::cout << std::endl << "The Total charges are $" << charges << std::endl;
	}
	else if (choice == 4)
	{
		std::cout << std::endl << "The Valid Choices are 1 Through 4." << std::endl;
		std::cout << "Run the Program again and select One of those " << std:: endl;
	}


    return 0;
}

