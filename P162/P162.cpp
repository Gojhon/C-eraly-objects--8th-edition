// P162.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

int main()
{
	int score1, score2, score3;
	double average;
	std::cout << "Enter 3 test scores and I Will average Them: ";
	std::cin >> score1 >> score2 >> score3;

	average = (score1 + score2 + score3) / 3.0;
	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	std::cout << "Your average is " << average << std::endl;

	if (average == 100)
	{
		std::cout << "Congratulations! ";
		std::cout << "That's a perfect score!" << std::endl;
	}

    return 0;
}

