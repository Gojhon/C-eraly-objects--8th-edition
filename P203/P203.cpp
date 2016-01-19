// P203.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
int main()
{
	const double PRICE_A = 249.0,
		PRICE_B = 299.0;

	std::string partNum;

	std::cout << "The steroe part numbers are:" << std::endl;
	std::cout << "Boom Box   : Part Number S-29A " << std::endl;
	std::cout << "Shelf Model: part Number S-29B " << std::endl;
	std::cout << "Enter The part Number of the stereo you " << std::endl;
	std::cout << "wish to purchase : ";
	std::cin >> partNum;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	 

	if (partNum == "S-29A")
		std::cout << "The price is $" << PRICE_A << std::endl;
	else if (partNum == "S-29B")
		std::cout << "THe price is $ " << PRICE_B << std::endl;
	else
		std::cout <<partNum<<" is not a valid part number"<<std::endl;



    return 0;
}

