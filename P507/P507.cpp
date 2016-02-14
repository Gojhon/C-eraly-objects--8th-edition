// P507.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	std::cout << "Enter the hous worked by : ";
	for (auto&&item : hours)
	{
		std::cin >> item;
	}
	
	std::cout << "The hours you entered are: ";
	std::cout << " " << hours[0];
	std::cout << " " << hours[1];
	std::cout << " " << hours[2];
	std::cout << " " << hours[3];
	std::cout << " " << hours[4];
	std::cout << " " << hours[5] << std::endl;


    return 0;
}

