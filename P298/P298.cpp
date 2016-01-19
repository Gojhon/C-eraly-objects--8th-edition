// P298.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

int main()
{
	std::ifstream inputFile;
	int numbeOfDays = 0;
	double sales, totalSales = 0.0;
	inputFile.open("Sales.txt");

	while (inputFile >> sales)
	{
		/*if(inputfile.fail()){
		inputfile.clear();
		std::string empty;
		std::getline(inputfile,empty);
		continue;
		*/
		//if(inputFile.eof())break; 문자열이 없으면더하지 않음
		totalSales += sales;
		numbeOfDays++;
	}

	inputFile.close();
	std::cout << "Total Sales for the " << numbeOfDays << " days wers $" << totalSales;

    return 0;
}

