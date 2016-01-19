// P78.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
int main()
{
	int length, width, area;
	std::cout << "this Program calculates the area of a rectangle" << std::endl;
	std::cout << "What is the length of the Rectangle? ";
	std::cin  >> length;
	std::cout << "What is the Width of the Rectangle? ";
	std::cin >> width;

	area = length*width;
	std::cout << "The area of the Rectangle is " << area << std::endl;



    return 0;
}

