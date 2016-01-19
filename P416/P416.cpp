// P416.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

class Circle {
private:
	double radius;
public:
	void setRadius(double r)
	{
		radius =r;
	}
	double getArea()
	{
		return 3.14*pow(radius, 2);
	}

};
int main()
{
	Circle circle1, circle2;

	circle1.setRadius(1);
	circle2.setRadius(2.5);

	std::cout << "area of circle1 is " << circle1.getArea() << std::endl;
	std::cout << "area of circle2 is " << circle2.getArea() << std::endl;

    return 0;
}

