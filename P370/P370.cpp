// P370.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void doubleNum(int &refVar);

int main()
{
	int value = 4;

	std::cout << "In Main, value is " << value << std::endl;
	std::cout << "Now calling doubleNum..." << std::endl;
	doubleNum(value);
	std::cout << "Now back in main , value is " << value << std::endl;

    return 0;
}

void doubleNum(int &refVar)
{
	refVar *= 2;
}
