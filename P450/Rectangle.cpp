#include"Rectangle.h"

bool Rectangle::setLength(double len)
{
	bool valiData = true;

	if (len >= 0)
		length = len;
	else
		valiData = false;

	return valiData;
}

bool Rectangle::setWidth(double w)
{
	bool valiData = true;
	
	if (w >= 0)
		width = w;
	else
		valiData = false;

	return valiData;
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