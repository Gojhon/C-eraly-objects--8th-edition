// P1094.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<deque>

int main()
{
	std::deque<int> iDeque;
	std::cout << "   will now enqueue items..." << std::endl;
	for (int x = 2; x < 8; x += 2)
	{
		std::cout << "     " << x << std::endl;
		iDeque.push_back(x);
	}
	
	std::cout << "  will now dequeue items... " << std::endl;
	while (!iDeque.empty())
	{
		std::cout << "     " << iDeque.front() << std::endl;
		iDeque.pop_front();
	}



    return 0;
}

