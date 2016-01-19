// P255.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int num = 4;
	
	std::cout << num << "  ";
	std::cout << num++ << "  ";
	std::cout << num << "  ";
	std::cout << ++num << std::endl;

	std::cout << num << "  ";
	std::cout << num-- << "  ";
	std::cout << num << "  ";
	std::cout << --num << std::endl<<std::endl;

	return 0;
}

