// P268.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
int main()
{
	int num;
	std::cout << "Number Square" << std::endl;
	std::cout << "-------------" << std::endl;

	for (num = 1; num <= 5; num++)
	{
		std::cout << std::setw(4) << num << std::setw(7) << (num*num) << std::endl;
	}
    return 0;
}

