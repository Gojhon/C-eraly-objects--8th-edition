// P792.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>


int main()
{
	const int LENGTH = 80; //core constant
	char line[LENGTH];

	std::cout << "Enter a sentence of no more than "
		<< LENGTH - 1 << " characters: " << std::endl;
	std::cin.getline(line, LENGTH);
	std::cout << "The sentence you entered is:" << std::endl;

	for (int index = 0; line[index] != '\0'; index++)
	{
		std::cout << line[index];
	}

		return 0;
}

