// P348.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

double getRadius();
double square(double number);

int main()
{
	const double PI = 3.14159;
	double radius;
	double area;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	radius = getRadius();
	std::cout << "This Origram Calculates the area of a circle " << std::endl;
	area = PI*square(radius);

	std::cout << "The area is " << area << std::endl;
    return 0;
}

double getRadius()
{
	double rad;
	std::cout << "Enter the radius of the circle : ";
	std::cin >> rad;
	return rad;
}

double square(double number)
{
	return number*number;
}