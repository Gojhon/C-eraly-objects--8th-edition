// P910.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
int fib(int);


int main()
{
	std::cout << "      first 10 Fibonacci numbers are: " << std::endl;
	for (int x = 0; x < 10; x++)
		std::cout << fib(x) << " ";
	std::cout << std::endl;

	return 0;
}

int fib(int n)
{
	if (n <= 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}