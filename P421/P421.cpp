// P421.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

class Rectangle
{
private:
	double length;
	double width;
public:
	void setLength(double);
	void setWidth(double);
	double getLength();
	double getWidth();
	double getArea();
};

void Rectangle::setLength(double len)
{
	if (len >= 0.0)
		length = len;
	else
	{
		length = 1.0;
		std::cout << "Invalid length. Using a default value of 1.0" << std::endl;
	}
}

void Rectangle::setWidth(double w)
{
	if (w >= 0.0)
		width = w;
	else
	{
		width = 1.0;
		std::cout << "Invalid width. Using a default value of 1.0" << std::endl;
	}
}
double Rectangle::getLength()
{
	return length;
}

double Rectangle::getWidth()
{
	return width;
}
double Rectangle::getArea()
{
	return length*width;
}

int main()
{

	Rectangle box;
	double boxLength, boxwidth;
	std::cout << "This Program will calculate the area of a Rectangle" << std::endl;
	std::cout << "What is the Length?";
	std::cin >> boxLength;
	std::cout << "What is the width?";
	std::cin >> boxwidth;

	box.setLength(boxLength);
	box.setWidth(boxwidth);
	std::cout << std::endl << "Here is the Rectangle's data : "<<std::endl;
	std::cout << "Length : " << box.getLength() << std::endl;
	std::cout << "Width : " << box.getWidth() << std::endl;
	std::cout << "Area: " << box.getArea() << std::endl;


    return 0;
}

