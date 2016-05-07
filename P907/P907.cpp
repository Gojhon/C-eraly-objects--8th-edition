// P907.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int factorial(int);

int main()
{
	int number;
	std::cout << "Enter an Interger value and I will display" << std::endl;
	std::cout << "It's factorial: ";
	std::cin >> number;
	std::cout << "The factorial of " << number << " is ";
	std::cout << factorial(number) << std::endl;
    
	return 0;
}

int factorial(int num)
{
	if (num == 0)
		return 1;
	else
		return num * factorial(num - 1);

}

