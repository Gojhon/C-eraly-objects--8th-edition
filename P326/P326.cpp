// P326.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

void displayMessage()
{
	std::cout << "Hello From the Function Displaymessage." << std::endl;
}
int main()
{
	std::cout << "Hello from main" << std::endl;
	displayMessage();
	std::cout << "Back in function main again" << std::endl;

    return 0;
}

