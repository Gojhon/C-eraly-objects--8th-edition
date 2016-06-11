// P1094.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

