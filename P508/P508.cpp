// P508.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int count;

	std::cout << "Enter the hours worked by " << NUM_EMPLOYEES
		<< " employees : ";

	for (count = 0; count < NUM_EMPLOYEES; count++)
	{
		std::cin >> hours[count];
	}
	std::cout << "THe hours you entered are: ";

	for (count = 0; count < NUM_EMPLOYEES; count++)
	{
		std::cout << " " << hours[count];
	}

	std::cout << std::endl;



	return 0;
}

