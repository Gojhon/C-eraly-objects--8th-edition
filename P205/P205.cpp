// P205.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<cctype>

int main()
{
	char input;
	std::cout << "Enter any character: ";
	std::cin.get(input);

	std::cout << "The character you entered is: " << input << std::endl;
	std::cout << "ITs ASCII code is : " << static_cast<int>(input) << std::endl;

	if (isalpha(input))
		std::cout << "That's an alphabetic character" << std::endl;
	if (isdigit(input))
		std::cout << "That's a numeric digit " << std::endl;
	if (islower(input))
		std::cout << "The letter you entered is uppercase " << std::endl;
	if (iswspace(input))
		std::cout << "That's a whitespae character " << std::endl;


    return 0;
}

