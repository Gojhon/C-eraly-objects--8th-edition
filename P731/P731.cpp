// P731.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

#include"Length.h"

int main()
{
	Length first(0), second(0), third(0); 
	//Length first
	int f, i;
	std::cout << "Enter a distance in feet and inches: ";
	std::cin >> f >> i;
	first.setLength(f, i);
	std::cout << "Ebter another distance in feet and inches :";
	std::cin >> f >> i;
	second.setLength(f, i);
	
	third = first + second;
	std::cout << "first + second = ";
	std::cout << third.getFeet() << "  feet, ";
	std::cout << third.getInches() << " inches." << std::endl;
	third = first - second;
	std::cout << "first - second = ";
	std::cout << third.getFeet() << " feet,";
	std::cout << third.getInches()<<" inches" << std::endl;

	std::cout << "first == second = ";
	if (first == second)
		std::cout << "true"<<std::endl;
	else 
		std::cout << "false"<<std::endl;

	std::cout << "first < second = ";
	if (first < second)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
    return 0;
}

