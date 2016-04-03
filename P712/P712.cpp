// P712.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

class Rectangle
{
private:
	double width, length;
public:
	Rectangle(double width, double lenth)
	{
		this->width = width;
		this->length = lenth;
	}
	
	double getWidth()const { return width; }
	double getLength()const { return length; }
	void output()const
	{
		std::cout << "width is " << width << " , "
			<< "Length is " << length << std::endl;
	}
};

int main()
{
	Rectangle box1(10, 20), box2(5, 10);

	std::cout << "Before the assignment:" << std::endl;
	
	std::cout << "Box 1 data: \t"; box1.output();
	std::cout << "Box 2 data: \t"; box2.output();

	box2 = box1;

	std::cout << std::endl << "After the assignment : " << std::endl;
	std::cout << "Box 1 data:\t"; box1.output();
	std::cout << "Box 2 data:\t"; box2.output();

    return 0;
}

