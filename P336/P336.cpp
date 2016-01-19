// P336.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void displayValue(int num);

int main()
{
	std::cout << "I am Pasing Several values to displayValue" << std::endl;
	//unrolling loop <속도가 더 빠름>
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