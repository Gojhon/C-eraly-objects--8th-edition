// P80.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

