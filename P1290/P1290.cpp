// P1290.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//
#include<iostream>
#include "stdafx.h"
namespace test
{
	int x, y, z;
}

int main()
{
	test::x = 10;
	test::y = 20;
	test::z = 30;
	
	std::cout << "Values are " << std::endl;
	std::cout << test::x << " " << test::y << " " << test::z << std::endl;

    return 0;
}

