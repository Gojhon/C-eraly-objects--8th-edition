// P125.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string firstName, lastname, fullname;
	std::string stars;
	int numStasrs;

	std::cout << "Please Enter your first name: ";
	std::getline(std::cin, firstName);

	std::cout << "Please Enter your last name: ";
	std::getline(std::cin, lastname);
	fullname = firstName + " " + lastname;
	numStasrs = fullname.length();
	stars.assign(numStasrs,'*');

	std::cout << std::endl;
	std::cout << stars << std::endl;
	std::cout << fullname<< std::endl;
	std::cout << stars << std::endl;


	return 0;
}

