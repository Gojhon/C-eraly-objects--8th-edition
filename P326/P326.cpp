// P326.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

