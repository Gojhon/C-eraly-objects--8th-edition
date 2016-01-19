// P302.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
int main()
{
	std::string name;

	int count = 1, score, totalscore = 0;
	double average;

	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	std::cout << "Enter the first name of student " << count << "(or q to quit) : ";
	std::cin >> name;

	while (name != "Q"&&name != "q")
	{
		std::cout << "Enter score 1: ";
		std::cin >> score;

		if (score <= 0 || score >= 100)
		{
			std::cout << "Score Must be beween 0 and 100. Please Reenter";
			std::cin >> score;
		}
		totalscore += score;
		std::cout << "enter score 2 : ";
		std::cin >> score;
		if (score <= 0 || score >= 100)
		{
			std::cout << "Score must be between 0 and 100. Please reenter";
			std::cin >> score;
		}
		totalscore += score;
		average = totalscore / 2;
		std::cout << name << std::setw(6) << average << std::endl;
		std::cout << "Enter the first name of student " << count++ << "(or Q to quit): ";
		std::cin>>name;

	}
    return 0;
}

