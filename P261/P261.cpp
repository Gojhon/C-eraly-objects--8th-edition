// P261.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int score1, score2, score3;
	double average;
	char again;

	do
	{	std::cout << "Enter 3 Scores and I will average the : ";
		std::cin >> score1 >> score2 >> score3;
		average = (score1 + score2 + score3) / 3.0;
		std::cout << "the average is " << average << std::endl << std::endl;
		std::cout << "Do you Want to average another set?(Y/N)" << std::endl;
		std::cin >> again;
	} while (again=='Y'||again=='y');
    return 0;
}

