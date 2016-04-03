// P641.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	int x = 25;
	int *ptr;

	ptr = &x;

	std::cout << "Here is the value in x ,printed twice: " << std::endl;
	std::cout << x << "  " << *ptr << std::endl;

	*ptr = 100;
	std::cout << "Once again, here is the value in x:" << std::endl;
	std::cout << x<<"   "<<*ptr<< std::endl;

    return 0;
}

