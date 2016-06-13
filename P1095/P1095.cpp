// P1095.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<queue>

int main()
{
	std::queue<int> iQueue;

	std::cout << "I will now enqueue itesm.. " << std::endl;
	for (int x = 2; x < 8; x += 2)
	{
		std::cout << "Pushing " << x << std::endl;
		iQueue.push(x);
	}
	std::cout << "I will now dequeue items..." << std::endl;
	while (!iQueue.empty())
	{
		std::cout << "Popping " << iQueue.front() << std::endl;
		iQueue.pop();
	}

    return 0;
}

