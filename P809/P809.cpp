// P809.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>
#include<cstdlib>

int main()
{
	const int LENGTH = 20;
	char input[LENGTH];
	int total = 0;
	int count = 0;
	double average;

	std::cout << "This Program will averager a series of number." << std::endl;
	std::cout << "Enter the first number or Q to quit: ";
	std::cin.getline(input, LENGTH);
	while ((strcmp(input, "Q") != 0) && (strcmp(input, "q") != 0))
	{
		total += atoi(input);
		count++;
		std::cout << "Enter the next number or Q to quit: ";
		std::cin.getline(input, LENGTH);
	}

    return 0;
}

