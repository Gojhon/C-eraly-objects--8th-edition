// P126.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	const int SIZE = 12;
	char name[SIZE];

	std::cout << "Please Enter Your First Name ";
	std::cin >> name;
	std::cout << "Hello, " << name << std::endl;

    return 0;
}

