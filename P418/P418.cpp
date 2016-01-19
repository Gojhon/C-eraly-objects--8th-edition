// P418.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
class Circle
{
private: //�������� ������ private Ŭ������������ �������
	double radius; //radius�� ���� �����ҷ��� Ŭ���������� �������־���Ѵ�.

public: //�������� ������ public�� ��𼭵� �������
	void setRadius(double);
	double getArea();
};
//Ŭ���� Circle�� ���� �� CircleŬ������ �Լ��� �ܺη� ����� �� �ִ�.
void Circle::setRadius(double r) //�Լ���� ���Ÿ�� ���̿� Ŭ�����̸��� ���������ڸ� �Է�
{
	radius=r; //Ŭ�������� ���� radius���� �Է��Ѵ�. 
}
double Circle::getArea() //�Լ���� ���Ÿ�� ���̿� Ŭ�����̸��� ���������ڸ� �Է�
{
	return 3.14* pow(radius, 2); //�Էµ� ���� �����Ͽ� 3.14�� �����ش�.
}
int main()
{
	Circle circle1, circle2; //CircleŬ���� circle1,circle2 ��ü�� ���� 

	circle1.setRadius(1); //circle1�� radius������ ���� �Է�
	circle2.setRadius(2.5);//circle2�� radius������ ���� �Է�

	std::cout << "area of circle1 is " << circle1.getArea() << std::endl;//circle1�� getArea()�Լ� ȣ���Ͽ� ���� ����Ѵ�. 
	std::cout << "area of circle2 is " << circle2.getArea() << std::endl;//circle2�� getArea()�Լ� ȣ���Ͽ� ���� ����Ѵ�.

    return 0;
}

