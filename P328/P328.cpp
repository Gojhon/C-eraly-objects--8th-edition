// P328.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void displayMessage() //호출할 수 있는 타입-일반함수 callable Type
{
	std::cout << "Hello From the Function DisplayMessage " << std::endl;
}
int main()
{
	std::cout << "Hello From main" << std::endl;

	for (int count = 0; count < 3; count++)
		displayMessage();

	std::cout << "Back in function main again " << std::endl;

    return 0;
}

