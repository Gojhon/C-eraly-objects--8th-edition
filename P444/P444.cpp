// P444.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

class Rectangle
{
private:
	double length;
	double width;
public:
	void setLength(double len)
	{
		length = len;
	}

	void setWith(double wid)
	{
		width = wid;
	}
	double getLength()
	{
		return length;
	}
	double getWidth()
	{
		return width;
	}
	double getArea()
	{
		return length *width;
	}
};
class Carpet
{
private:
	double PricePersqyd;
	Rectangle size;
public:
	void setPricePerYd(double p)
	{
		PricePersqyd = p;
	}
	void setDimensions(double len, double wid)
	{
		size.setLength(len / 3);
		size.setWith(wid / 3);
	}
	double getTotalPrice()
	{
		return (size.getArea()*PricePersqyd);
	}
};

int main()
{
	Carpet purchase;
	double pricePerYd;
	double length;
	double width;

	std::cout << "Room length in feet: ";
	std::cin >> length;
	std::cout <<"Room width in feet : ";
	std::cin >> width;
	std::cout << "Carpet Price per sq.Yard : ";
	std::cin >> pricePerYd;
	
	purchase.setDimensions(length, width);
	purchase.setPricePerYd(pricePerYd);

	std::cout << std::endl << "The total Price of my new " << length << " x " << width
		<< "  carpet is $" << purchase.getTotalPrice() << std::endl;

    return 0;
}

