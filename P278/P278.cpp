// P278.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int numStudents, numTests;
	double average;

	std::cout << "this Program avrages test Score" << std::endl;
	std::cout << "How many Students are there?";
	std::cin >> numStudents;

	std::cout << "How many test Scores does each Studnt have ";
	std::cin >> numTests;
	std::cout << std::endl;

	for (int snum = 1; snum <= numStudents; snum++)
	{
		double total = 0.0;
		for (int test = 1; test <= numTests; test++)
		{
			int score;
			std::cout << "Enter Score" << test << " For";
			std::cout << " Student " << snum << " : ";
			std::cin >> score;
			total += score;
		}
		average = total / numTests;
		std::cout << "The average score for Student" << snum;
		std::cout << " is " << average << std::endl;
	}
    return 0;
}

