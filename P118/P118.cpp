// P118.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::string city;

	std::cout << "Please Enter your name";
	std::cin >> name;
	std::cout << "Enter the City you live in:";
	std::cin >> city;

	std::cout << "Hello , " << name << std::endl;
	std::cout << "You live in " << city << std::endl;

    return 0;
}

