// P212.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	char choice;
	std::cout << "Enter A, B, or C: ";
	std::cin >> choice;

	switch (choice)
	{
	case 'A': std::cout << "You entered A." << std::endl;
	case 'B': std::cout << "You entered B." << std::endl;
	case 'C': std::cout << "You entered C." << std::endl;
	default:std::cout << "You did not enter A,B or C!" << std::endl;
		break;

	}

}

