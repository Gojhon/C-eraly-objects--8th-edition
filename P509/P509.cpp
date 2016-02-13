// P509.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	int count = 0;

	std::ifstream datafile;

	if (!datafile)
		std::cout << "Error opening data file " << std::endl;

	datafile.open("Work.dat");
	if (!datafile)
	{
		std::cout << "Error Opening data file" << std::endl;
	}
	else
	{
		while (count < NUM_EMPLOYEES&&datafile >> hours[count])
			count++;

		datafile.close();
		std::cout << "The hours worked by each employee are " << std::endl;
		for (int employee = 0; employee < count; employee++)
		{
			std::cout << "Employee " << employee + 1 << " : ";
			std::cout << hours[employee] << std::endl;

		}
	}

    return 0;
}

