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
	radius = r; //�Էµ� ���� double���� radius�� ���� �ִ´�.
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
	return 3.14 * pow(radius, 2); //���� ���̸� ���Ѵ�.3.15 x �Էµ� �� ���� �� �� ����� ����Ѵ�. 
}
Circle::~Circle()
{
}