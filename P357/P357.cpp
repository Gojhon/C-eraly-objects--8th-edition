// P357.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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