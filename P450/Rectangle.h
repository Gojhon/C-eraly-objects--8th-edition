#pragma once

#ifndef Rectangle_H //Rectangle_H로 정의한다.
#define Rectangle_H
class Rectangle
{
private:
	double length;
	double width;

public:
	bool setLength(double);
	bool setWidth(double);
	double getLength();
	double getWidth();
	double getArea();
};

#endif // !Rectangle_H
