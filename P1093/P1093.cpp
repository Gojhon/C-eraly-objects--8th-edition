// P1093.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "DynIntQueue.h"

int main()
{
	DynIntQueue iQueue;
	std::cout << "Enqueuing 5 items..." << std::endl;

	for (int k = 1; k <= 5; k++)
	{
		iQueue.enqueue(k*k);
	}
	std::cout << "THhe valuese in the queue were : " << std::endl;
	while (!iQueue.isEmpty())
	{
		int value;
		iQueue.dequeue(value);
		std::cout << value << " ";
	}
    return 0;
}

