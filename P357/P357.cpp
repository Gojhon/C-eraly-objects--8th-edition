// P357.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int num = 2;
void anotherFunction();

int main()
{
	std::cout << "In main, num is " << num << std::endl;
	anotherFunction();
	std::cout << "Back in main, num is still " << num << std::endl;

    return 0;
}

void anotherFunction()
{
	std::cout << "In anotherFunction,num is " << num << std::endl;
	num = 50;
	std::cout << "But, it is now changed to " << num << std::endl;
}