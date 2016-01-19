// P80.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int length, width, area;
	std::cout << "This Program Calculates the area of a Rectangle" << std::endl;
	std::cout << "separated by a space" << std::endl;
	std::cin >> length >> width;
	area = length*width;
	std::cout << "The area o the Rectangle is " << area << std::endl;

    return 0;
}

