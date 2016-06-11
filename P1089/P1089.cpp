// P1089.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

