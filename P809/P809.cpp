// P809.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

