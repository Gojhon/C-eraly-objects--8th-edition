// P640.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	int x = 25;
	int *ptr;
	ptr = &x;

	std::cout << "The values in x is "<<x<<std::endl;
	std::cout << "THe address of x is " << ptr << std::endl;
    return 0;
}

