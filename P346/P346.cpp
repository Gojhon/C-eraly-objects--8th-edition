// P346.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int sum(int num1, int num2);

int main()
{
	int  valuel1 = 20, valuel2 = 40,
		total;

	total = sum(valuel1, valuel2);

	std::cout << "The Sum of " << valuel1 << " and " << valuel2 << " is " << total << std::endl;

    return 0;
}

int sum(int num1, int num2)
{
	return num1 + num2;
}
