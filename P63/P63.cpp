// P63.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	double basePayRate = 18.25,
		overtimePayRate = 27.38,
		regularHours = 40.0,
		overtimeHours = 10,
		regularWages,
		overtimeWages,
		totalWages;
	regularWages = basePayRate*regularHours;
	overtimeWages = overtimePayRate*overtimeHours;
	totalWages = regularWages + overtimeWages;
	std::cout << "Wages for this week are $" << totalWages << std::endl;


    return 0;
}

