// P63.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

