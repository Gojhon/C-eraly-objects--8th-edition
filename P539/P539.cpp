// P539.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

typedef int arrayType[];

void showValues(arrayType, int);

int main()
{
	const int Size1 = 8;
	const int Size2 = 5;

	int set1[] = {5,10,15,20,25,30,35,40};
	int set2[] = {2,4,6,8,10};

	std::cout << "Here are the Values stored in array set1: ";
	showValues(set1, Size1);

	std::cout << "Here are the Values stored in array set2: ";
	showValues(set2, Size2);

	return 0;
}

void showValues(arrayType nums, int size)
{
	for (int index = 0; index < size; index++)
		std::cout << nums[index] << " ";
	std::cout << std::endl;
}
