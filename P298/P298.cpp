// P298.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
		//if(inputFile.eof())break; ���ڿ��� ����������� ����
		totalSales += sales;
		numbeOfDays++;
	}

	inputFile.close();
	std::cout << "Total Sales for the " << numbeOfDays << " days wers $" << totalSales;

    return 0;
}

