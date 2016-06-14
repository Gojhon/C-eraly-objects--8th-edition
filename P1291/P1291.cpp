// P1291.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

namespace test1
{
	int x, y, z;
}

namespace test2
{
	int x, y, z;
}

int main()
{
	test1::x = 10;
	test1::y = 20;
	test1::z = 30;
	std::cout << "The test1 values are : " << std::endl;
	std::cout << test1::x << " " << test1::y << " " << test1::z << std::endl;
	test2::x = 1;
	test2::y = 2;
	test2::z = 3;
	std::cout << "Te test2 values are  " << std::endl;
	std::cout << test2::x << " " << test2::y << " " << test2::z << std::endl;
    return 0;
}

