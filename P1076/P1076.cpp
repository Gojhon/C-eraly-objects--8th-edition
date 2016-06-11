// P1076.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "IntStack.h"
#include<iostream>

int main()
{
	IntStack stack[5];
	int values[] = { 5,10,15,20,25 };
	int value;
	try
	{
		std::cout << "Pushing..." << std::endl;
		for (int k = 0; k < 5; k++)
		{
			std::cout << values[k] << " ";
			stack.push(values[k]);
		}
		std::cout << std :: endl << "Pushing value after stack is full..";
		stack.push(30);
		std::cout << std::endl << "You should not see this!! ";
		std::cout << std::endl;
	}
	catch (const std::exception&)
	{
		std::cout << std::endl << "An overflow exception occurred " << std::endl;


	}

    return 0;
}

