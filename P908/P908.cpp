// P908.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int gcd(int,int);

int main()
{
	int num1, num2;
	std::cout << "Enter two integers: ";
	std::cin >> num1 >> num2;
	std::cout << "The greastest common divisor of " << num1;
	std::cout << " and " << num2 << " is ";
	std::cout << gcd(num1, num2) << std::endl;

    return 0;
}

int gcd(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return gcd(y, x % y);
}
