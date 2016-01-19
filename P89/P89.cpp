// P89.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

