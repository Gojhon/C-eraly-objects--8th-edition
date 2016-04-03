// P643.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>


int main()
{
	short numbers[]{ 10,20,30,40,50 };
	std::cout << "The first element of the array is ";
	std::cout << *numbers << std::endl;

    return 0;
}

