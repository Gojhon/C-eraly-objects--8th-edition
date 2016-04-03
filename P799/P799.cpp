// P799.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
#include<iomanip>

int main()
{
	const double A_PRICE = 49.0,B_PRICE=69.95;
	const int PART_LENGTH = 8;
	char partNum[PART_LENGTH];

	std::cout << "THe computer Part Number are : " << std::endl;
	std::cout << "\tBLu-ray Disk Drive, part Number S147-29A" << std::endl;
	std::cout << "\tWireless Router,part number s147-29B" << std::endl;
	std::cout << "Enter the part number of the item you" << std::endl;
	std::cout << "wish to Purchase: ";

	std::cin >> std::setw(9);
	std::cin >> partNum;
	std::cout << std::showpoint << std::fixed << std::setprecision(2);

	if (strcmp(partNum, "S147-29A") == 0)
		std::cout << "The price is $" << A_PRICE << std::endl;
	else if (strcmp(partNum, "S147-29B") == 0)
		std::cout << "The Price is $" << B_PRICE << std::endl;
	else
		std::cout << partNum << " is not a valid part Number " << std::endl;


    return 0;
}

