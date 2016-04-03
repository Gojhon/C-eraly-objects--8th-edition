// P815.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int countChars(const char*, char);

int main()
{
	const int S_LENGTH = 51;
	char userString[S_LENGTH];
	
	char letter;
	std::cout << "Enter a string (up to " << S_LENGTH - 1 << " character): ";
	std::cin.getline(userString, S_LENGTH);
	std::cout << "Enter a charcter and I will tell you how many" << std::endl;
	std::cout << "times it appears in the string: ";
	std::cin >> letter;

	std::cout << letter << " appears ";
	std::cout << countChars(userString, letter) << " times" << std::endl;
    return 0;
}

int countChars(const char*strPtr, char ch)
{
	int count = 0;
	while (*strPtr != '\0')
	{
		if (*strPtr == ch)
			count++;
		strPtr++;
	}
	return count;;
}

