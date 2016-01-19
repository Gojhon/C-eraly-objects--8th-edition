// P106.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{

	int begInv, sold, store1, store2;

	std::cout << "One Week Ago, 2 New Widget Stores Opend" << std::endl;
	std::cout << "at the same time with the same eginning" << std::endl;
	std::cout << "inventory. What was the beginning inventory? " ;
	std::cin >> begInv;

	store1 = store2 = begInv;

	std::cout << "How many widgets has stor1 sold? ";
	std::cin >> sold;
	store1-= sold;

	std::cout << "How many widgets has store 2 sold? ";
	std::cin >> sold;
	store2 -= sold;

	std::cout << std::endl << "The Current inventory of each store" << std::endl;
	std::cout << "Store 1: " << store1 << std::endl;
	std::cout << "Store 2: " << store2 << std::endl;
	
    return 0;
}

