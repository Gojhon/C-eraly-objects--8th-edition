// P647.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int SIZE = 8;
	int set[] = { 5,10,15,20,25,30,35,40 };
	int *numptr;
	numptr = set;
	std::cout << "   number in set are:" << std::endl;
	for (int index = 0; index < SIZE; index++)
	{
		std::cout << *numptr << " ";
		numptr++;
	}
	std::cout << std::endl << "The numbers in set backwards are:" << std::endl;

	for (int index = 0; index < SIZE; index++)
	{
		numptr--;
		std::cout << *numptr << " ";
	}
		return 0;
}

