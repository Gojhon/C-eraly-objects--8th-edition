// P102.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
#define PI 3.14159

#include "stdafx.h"
#include <iostream>
#include <cmath>
int main()
{
	double area, radius;

	std::cout << "This Program Calculates the area of Circle" << std::endl;

	std::cout << "What is the radius of the Circle ";
	std::cin >> radius;

	area = PI*pow(radius, 2);
	std::cout << "The area is " << area << std::endl;

    return 0;
}

