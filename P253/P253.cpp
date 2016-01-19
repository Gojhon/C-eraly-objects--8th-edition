// P253.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int countUp =1;
	while (countUp < 6)
	{
		std::cout << countUp << "  ";
		countUp++;
	}

	std::cout << std::endl << std::endl;

	int countDown = 5;
	while (countDown > 0)
	{
		std::cout << countDown << "  ";
		countDown--;
	}

    return 0;
}

