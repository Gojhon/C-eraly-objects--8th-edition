// P101.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

int main()
{
	const double PI = 3.14159;
	double area, radius;

	std::cout << "This Program Calculates the area of a circle" << std::endl;
	std::cout << "What os the radius of the circle?";
	std::cin >> radius;

	area = PI*pow(radius, 2);
	std::cout << "The area is " << area << std::endl;

    return 0;
}

