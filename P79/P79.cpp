// P79.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int intNumber;
	double floatNumber;

	std::cout << "Input a Number. ";
	std::cin >> intNumber;
	std::cout << "Input a second number. " ;
	std::cin >> floatNumber;
	std::cout << "You entered: " << intNumber << " and " << floatNumber << std::endl;
    return 0;
}

