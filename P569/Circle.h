#pragma once
#include<cmath>

class Circle
{
	private:
		double radius;
		int centerX, centerY;
	public:
		Circle();
		Circle(double r);
		Circle(double r, int x, int y);
		~Circle();

		void setRadius(double r);
		int getXcoord();
		int getYcoord();
		double findArea();

};

Circle::Circle():radius(1.0),centerX(0),centerY(0)
{

}

Circle::Circle(double r):radius(r),centerX(0),centerY(0)
{
}

Circle::Circle(double r, int x, int y) : radius(r), centerX(x), centerY(y)
{
}
void Circle::setRadius(double r)
{
	radius = r; //입력된 값은 double변수 radius에 값을 넣는다.
}
int Circle::getXcoord()
{
	return centerX; 
}
int Circle::getYcoord()
{
	return centerY;
}
double Circle::findArea()
{
	return 3.14 * pow(radius, 2); //원의 넓이를 구한다.3.15 x 입력된 값 제곱 을 한 결과를 출력한다. 
}
Circle::~Circle()
{
}