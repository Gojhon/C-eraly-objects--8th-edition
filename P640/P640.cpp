// P640.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

