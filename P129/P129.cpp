// P129.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	const int size = 5;
	char word[size];
	std::cout << "Enter a word : ";
	std::cin.width(size);
	std::cin >> word;
	std::cout << "You entered " << word << std::endl;

    return 0;
}

