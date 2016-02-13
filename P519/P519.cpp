// P519.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	const int size = 7;
	int numbers[size] = { 1,2,4,8 };

	std::cout << "Here are the contents of the array :" << std::endl;
	for (int index = 0; index < size; index++)
	{
		std::cout << numbers[index] << " ";
	}
	std::cout << std::endl;

    return 0;
}

