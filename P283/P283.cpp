// P283.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>

int main()
{
	int numDVDs;
	double total = 0.0;
	char current;

	std::cout << "How many DVDs are bing rented? ";
	std::cin >> numDVDs;

	for (int dvdCount = 1; dvdCount <= numDVDs; dvdCount++)
	{
		if (dvdCount % 3 == 0)
		{
			std::cout << " DVD #" << dvdCount << " is free" << std::endl;
			continue;
		}
		std::cout << "Is DVD # " << dvdCount << " acurrent release(Y/N)? ";
		std::cin >> current;
		if (current == 'Y' || (current == 'y'))
			total += 3.50;
		else
			total += 2.50;
	}

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << "The total is $ " << total << std::endl;
    return 0;
}

