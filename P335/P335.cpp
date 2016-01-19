// P335.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void displayValue(int num);

int main()
{
	std::cout << "I am Pasing 5 to displayValue" << std::endl;
	displayValue(5);
	std::cout << "Now I am back in main" << std::endl;
	return 0;
}

void displayValue(int num)
{
	std::cout << "the Value is " << num << std::endl;
}