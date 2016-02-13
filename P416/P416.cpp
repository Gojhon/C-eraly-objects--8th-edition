// P416.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<cmath> //pow�Լ��� ȣ���Ҷ� ���

class Circle {
private: // �ش� Ŭ���� �̿ܿ��� �����͸� ���� ����
	double radius;
public:  //��� ���� � ������� � Ŭ�������� ������ �� �ֵ��� ����ϴ� ���������� �Դϴ�
	void setRadius(double r)
	{
		radius=r; //�Էµ� ���� radius������ �����Ѵ�.
	}
	double getArea() 
	{
		return 3.14*pow(radius, 2);//getArea ȣ��� radius������ ���� ������ ���� 3.14�� ���Ѵ�.
	}

}; //Circle Ŭ������ �����Ѵ�.
int main()
{
	Circle circle1, circle2; //CircleŬ������ ��ü circle1�� circle2�� �����. 

	circle1.setRadius(1); //circle1�� setRadius�Լ��� 1�� �����Ѵ�
	circle2.setRadius(2.5);//circle2�� setRadius�Լ��� 2.5�� �����Ѵ�

	std::cout << "area of circle1 is " << circle1.getArea() << std::endl;  //circle1�� getArea()�Լ��� ��ȯ�� ���� ���.
	std::cout << "area of circle2 is " << circle2.getArea() << std::endl;  //circle2�� getArea()�Լ��� ��ȯ�� ���� ���.
    return 0;
}

