// P343.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void divide(double arg1, double arg2);

int main()
{
	double num1, num2;

	std::cout << "Enter two number and I will divide the first" << std::endl;
	std::cout << "number by the second number : ";
	std::cin >> num1 >> num2;
	divide(num1, num2);

    return 0;
}

void divide(double arg1, double arg2)
{
	if (arg2 == 0.0)
	{
		std::cout << "Sorry, I cannot divide by Zero " << std::endl;
		return;
	}
	std::cout << "The Quotient is "<<(arg1 / arg2) << std::endl;

}

float sim()
{
	if (true)return 3.0f;
	return (float)4;

}