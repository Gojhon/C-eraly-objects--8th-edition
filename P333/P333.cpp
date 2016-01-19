// P333.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void first();
void second();

int main()
{
	std::cout << "I am Starting in Function main" << std::endl;
	first();
	second();
	std::cout << "Back in function main again " << std::endl;
    return 0;
}
void first()
{
	std::cout << "I am now inside the function first" << std::endl;
}


void second()
{
	std::cout << "I am now inside the function second" << std::endl;
}