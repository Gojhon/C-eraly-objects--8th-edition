// P336.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

void displayValue(int num);

int main()
{
	std::cout << "I am Pasing Several values to displayValue" << std::endl;
	//unrolling loop <�ӵ��� �� ����>
	displayValue(5);
	displayValue(10);
	displayValue(2);
	displayValue(16);
	for (auto i : { 5,10,2,16 })
	{
		displayValue(i);
	}
	std::cout << "Now I am back in main" << std::endl;
	return 0;
}

void displayValue(int num)
{
	std::cout << "the Value is " << num << std::endl;
}