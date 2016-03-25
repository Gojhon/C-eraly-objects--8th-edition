// P569.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include"Circle.h"

const int NUM_CIRCLES = 4; //��� ���� NUM_CIRCLES�� 4�� ��´�.

void test(Circle m) {}
int main()
{
	test({ 1,2,3, });
	Circle circle[NUM_CIRCLES];//Circle ��ü 4���� �����Ѵ�.

	for (int index = 0; index < NUM_CIRCLES; index++)
	{
		double r; //�Ǽ��� r�� �����Ѵ�.
		std::cout << "Enter the radius for circle " << (index + 1) << ": ";
		std::cin >> r;//�Ǽ��� r�� ���� �ִ´�.
		circle[index].setRadius(r);//circle��ü�� radius������ r�� ������ �ִ� ���� �ִ´�.
	}

	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	std::cout << std::endl << "Here are the areas of the " << NUM_CIRCLES << " circles." << std::endl;

	for (int index = 0; index < NUM_CIRCLES; index++)
	{
		std::cout << "circle " << (index + 1) << std::setw(8) << circle[index].findArea() << std::endl;
		//circle[index].findArea() = 3.14 * pow(radius, 2) �� ���� ����Ѵ�. ���� ���̸� ���
	}
    return 0;
}

