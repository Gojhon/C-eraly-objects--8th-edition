// P125.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

