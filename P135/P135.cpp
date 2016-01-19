// P135.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	unsigned seed;

	seed = time(0);
	srand(seed);

	std::cout << rand() << "    ";
	std::cout << rand() << "    ";
	std::cout << rand() << std::endl;
	return 0;
}

