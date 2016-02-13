// P516.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<iomanip>
int main()
{
	const int NUM_MONTHS = 12;
	std::string name[NUM_MONTHS] = { "January","February","March","April",
									"May","June","July","August","September",
									"October","November","December" };
	int days[NUM_MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	for (int month = 0; month < NUM_MONTHS; month++)
	{
		std::cout << std::setw(9) << std::left << name[month] << " has "
			<< days[month] << " days" << std::endl;
	}


    return 0;
}

