// P274.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int game = 1, points, total = 0;

	std::cout << "Enter the number of points your team has earned " << std::endl;
	std::cout << "so far this season . Then Enter -1 when finished" << std::endl << std::endl;
	std::cout << "Enter the points for game " << game << ": ";
	std::cin >> points;

	while (points != -1)
	{
		total += points;
		game++;
		std::cout << "Enter the points for game " << game << ": ";
		std::cin >> points;
	}
	std::cout << std::endl << "The toal Points are " << total << std::endl;
    return 0;
}

