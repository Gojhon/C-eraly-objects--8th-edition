// P128.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
int main()
{
	const int Size = 5;
	char word[Size];

	std::cout << "Enter a word ";
	std::cin >> std::setw(Size) >> word;
	std::cout << "You Entered " << word << std::endl;
    return 0;
}

