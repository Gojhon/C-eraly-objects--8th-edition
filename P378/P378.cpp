// P378.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
int square(int);
double square(double);

int main()
{
	int userInt;
	double userReal;

	std::cout << "Enter an integer and a floating-Point value: ";
	std::cin >> userInt >> userReal;

	std::cout << "Hear are their squares: ";
	std::cout<<std::fixed << std::showpoint << std::setprecision(2);
	std::cout <<square(userInt) << " and " << square(userReal) << std::endl;

	return 0;;

}

int square(int number)
{
	return number * number;
}

double square(double number)
{
	return number*number;
}
