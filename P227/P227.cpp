// P227.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
int main()
{
	const double PRICE_1 = 39.00,
		PRICE_2 = 69.00,
		PRICE_3 = 99.00,
		PRICE_4 = 139.00;
	
	const double PER_TREE_DELIVERY = 20.0, MAX_DELIVERY = 100.00;

	int numTrees, height;
	char planted, delivered;
	double treeCost, totalTreeCost,
		deliveyCost = 0.0,
		plantingCost = 0.0, 
		totalCharges;

	std::cout << " Green Fields Landscaping" << std::endl;
	std::cin >> numTrees;

	std::cout << "Evergreen Tree Purchase" << std::endl;
	std::cin >> height;
	
	std::cout << "Number of trees purchased : ";
	std::cin >> planted;

	if (!(planted == 'Y' || planted == 'y'))
	{
		std::cout << "Do you want the trees delivered? (Y/N): ";
		std::cin >> delivered;
	}


	if (height < 3)
		treeCost = PRICE_1;
	else if (height <=5)
		treeCost = PRICE_2;
	else if (height <= 8)
		treeCost = PRICE_3;
	else
		treeCost = PRICE_4;
	
	totalTreeCost = numTrees*treeCost;

	if ((planted == 'Y') || (planted == 'y'))
		plantingCost = totalTreeCost / 2;

	else if ((delivered == 'Y') || (delivered == 'y'))
	{
		if (numTrees <= 5)
			deliveyCost = PER_TREE_DELIVERY*numTrees;
		else
			deliveyCost = MAX_DELIVERY;
	}

	totalCharges = totalTreeCost + deliveyCost + plantingCost;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout<<std::endl<<std::endl<< "    Green Fields Landscaping " << std::endl;
	std::cout << std::setw(2) << numTrees << " trees @ $" << std::setw(6) << treeCost << " each=  $" << std::setw(8) << totalTreeCost << std::endl;
	std::cout << "Delivery charge" << std::setw(8) << deliveyCost << std::endl;
	std::cout << "planting charge" << std::setw(8) << plantingCost << std::endl;
	std::cout << "                            _____" << std::endl;
	std::cout << "Total amount due" << std::setw(8) << totalCharges <<std::endl << std::endl;

	return 0;
}

