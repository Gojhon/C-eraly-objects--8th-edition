// P450.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include "Rectangle.h"

int main()
{
	Rectangle box;
	double boxLengh, boxWidth;
	std::cout << "This Program will Calculate the area of a Rectangle " << std::endl;
	std::cout << "What is the Length?";
	std::cin >> boxLengh;
	std::cout << "What os the Width?";
	std::cin >> boxWidth;

	if (!box.setLength(boxLengh))
		std::cout << "Invalid box Length entered." << std::endl;
	else if (!box.setWidth(boxWidth))
		std::cout << "Invalid box width entered" << std::endl;
	else
	{
		std::cout << std::endl << "Here is the rectangle's data " << std::endl;
		std::cout << "Length : " << box.getLength() << std::endl;
		std::cout << "width : " << box.getWidth() << std::endl;
		std::cout << "Area : " << box.getArea() << std::endl;
	}


    return 0;
}

