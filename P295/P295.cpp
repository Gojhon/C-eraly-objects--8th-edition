// P295.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>


int main()
{
	std::ofstream outputFIle;
	int numberofDays;
	double sales;

	std::cout << "For how any days do you have Sales? ";
	std::cin >> numberofDays;

	outputFIle.open("Sales.txt");

	for (int count = 1; count <= numberofDays; count++)
	{
		std::cout << "Enter the sales for day "<<count << ": ";
		std::cin >> sales;

		outputFIle << sales << std::endl;
	}
	outputFIle.close();
	std::cout << "Data Written to Sales.txt" << std::endl;
    return 0;
}

