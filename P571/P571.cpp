 // P571.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include"Circle.h"

const int NUM_CIRCLES = 4;

int main()
{
	Circle circle[NUM_CIRCLES] = { 0.0,2.0,2.5 };

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << std::endl << "Here are the areas of the " << NUM_CIRCLES << " circles" << std::endl;

	for (int index = 0; index < NUM_CIRCLES; index++)
	{
		std::cout << "Circle " << (index + 1) << std::setw(8)
			<< circle[index].findArea() << std::endl;
	}
    return 0;
}

