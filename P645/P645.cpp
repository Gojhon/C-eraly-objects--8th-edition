// P645.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

int main()
{
	const int NUM_COINS = 5;
	double coins[NUM_COINS] = { 0.05,0.1,0.25,0.5,1.0 };
	double *doubleptr;
	
	doubleptr=coins;

	std::cout << std::setprecision(2);
	std::cout << "Here are the values in the coins array: " << std::endl;
	for (int count = 0; count < NUM_COINS; count++)
	{
		std::cout << doubleptr[count] << " ";
	}
	std::cout << std::endl << " Add here they are again:" << std::endl;
	for (int count = 0; count < NUM_COINS; count++)
	{
		std::cout << *(coins + count) << " ";
	}
	std::cout<<std::endl;
    return 0;
}

