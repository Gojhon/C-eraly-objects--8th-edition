// P348.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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