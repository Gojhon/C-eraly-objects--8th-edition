// P328.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

void displayMessage() //ȣ���� �� �ִ� Ÿ��-�Ϲ��Լ� callable Type
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

