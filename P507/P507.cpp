// P507.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int NUM_EMPLOYEES = 6;
	int hours[NUM_EMPLOYEES];
	std::cin >> hours[0];
	std::cin >> hours[1];
	std::cin >> hours[2];
	std::cin >> hours[3];
	std::cin >> hours[4];
	std::cin >> hours[5];
	
	std::cout << "The hours you entered are: ";
	std::cout << " " << hours[0];
	std::cout << " " << hours[1];
	std::cout << " " << hours[2];
	std::cout << " " << hours[3];
	std::cout << " " << hours[4];
	std::cout << " " << hours[5] << std::endl;


    return 0;
}

