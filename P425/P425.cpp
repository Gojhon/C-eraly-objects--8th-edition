// P425.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>

class Circle
{
private:
	double radius;
public :
	Circle();
	void setRadius(double);
	double getArea();
};
Circle::Circle()
{
	radius = 1.0;
}

void Circle::setRadius(double r)
{
	if (r >= 0)
		radius = r;
}
double Circle::getArea()
{
	return 3.14*pow(radius,2);
}
int main()
{
	Circle circle1;

	Circle circle2;

	circle2.setRadius(2.5);

	std::cout << "the area of circle1 is " << circle1.getArea() << std::endl;
	std::cout << "the area of circle2 is " << circle2.getArea() << std::endl;

    return 0;
}

