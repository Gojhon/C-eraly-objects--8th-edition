// P386.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>

void ShowFees(std::string, double, int);

int main()
{
	std::cout << "Calling the ShowFees Function with arguments" << "Adult,120.0,3." << std::endl;
	ShowFees("Adult", 120.0, 3);

	std::cout << "Calling the showFees Function with Arguments" << "Child,60.0,2";
	ShowFees("Child", 60.0, 2);


	std::cout << "Calling the showFees function with arguments" << "Senior,100.0,4" << std::endl;
	ShowFees("Senior", 100.0, 4);

    return 0;
}


void ShowFees(std::string Membertype, double rate, int months)
{
	std::cout << std::endl
		<< "Membership Type" << Membertype << "     "
		<< "Monthly rate $" << rate << std::endl
		<< "Number of months : " << months << std::endl
		<< "Total Charges :   $ " << (rate*months) <<
		std::endl;

}