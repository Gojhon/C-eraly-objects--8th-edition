// P89.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double area, radius;

	std::cout << "this Program Calculates the area of a circle " << std::endl;
	std::cout << "What is the radius of the circle ?";

	std::cin >> radius;
	area = 3.14159 *pow(radius, 2);
	std::cout << "The area is " << area << std::endl;

    return 0;
}

