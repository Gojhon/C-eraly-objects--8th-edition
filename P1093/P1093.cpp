// P1093.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

