// P245.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int number = 1;
	while (number <= 5)
	{
		std::cout << "Hello ";
		number += number;
	}

	std::cout << std::endl << "That's All" << std::endl;

    return 0;
}

