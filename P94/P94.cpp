// P94.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int books, months;
	

	std::cout << "How many books do you Plan to read?";
	std::cin >> books;
	std::cout << "How many months will it take you to read them?";
	std::cin >> months;
	double booksPerMonth;
	booksPerMonth = static_cast<double>(books) / months;
	std::cout << "That is " << booksPerMonth << " books per month" << std::endl;

    return 0;
}

