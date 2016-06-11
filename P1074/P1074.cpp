// P1074.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include "IntStack.h"
int main()
{
	IntStack stack(5);
	int values[] = { 5,10,15,20,25 };
	int value;
	
	std::cout << "Pushing..." << std::endl;
	for (int k = 0; k < 5; k++)
	{
		std::cout << values[k] << " ";
		stack.push(values[k]);
	}
	std::cout << std::endl << "Popping..." << std::endl;
	while (!stack.isEmpty())
	{
		stack.pop(value);
		std::cout << value << " ";
	}
	std::cout << std::endl;
	
    return 0;
}

