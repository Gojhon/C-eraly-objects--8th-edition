// P113.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{

	double day1, day2, day3, total;
	std::cout << "Enter the sales for day1" << std::endl;
	std::cin >> day1;
	std::cout << "Enter the sales for day2" << std::endl;
	std::cin >> day2;
	std::cout << "Enter the sales for day3" << std::endl;
	std::cin >> day3;
	
	total = day1 + day2 + day3;
	
	std::cout << std::endl << "Sales Figures" << std::endl;
	std::cout << "-----------" << std::endl;
	std::cout << std::setprecision(5);
	std::cout << "Day 1: "<< std::setw(8) << day1 << std::endl;
	std::cout << "Day 2: " << std::setw(8)<< day2 << std::endl;
	std::cout <<"Day 3: " << std::setw(8) << day3 << std::endl;
	std::cout <<"Total: " << std::setw(8) << total << std::endl;



    return 0;
}

