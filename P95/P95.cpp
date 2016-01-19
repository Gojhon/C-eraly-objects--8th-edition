// P95.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	int number = 65;
	std::cout << number << std::endl;
	std::cout << static_cast<char>(number) << std::endl;

    return 0;
}

