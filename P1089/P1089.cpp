// P1089.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include"IntQueue.h"
#include<iostream>

int main()
{
	IntQueue iQueue(5);
	std::cout << "Enqueuing 5 items..." << std::endl;

	for (int k = 1; k <= 5; k++)
	{
		iQueue.enqueue(k*k);
	}
	std::cout << "The values in the queue were: ";
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		std::cout << value << " ";
	}

	std::cout << std::endl;

    return 0;
}

