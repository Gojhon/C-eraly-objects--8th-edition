 // P658.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void displayValues(const int *numbers, int size);

int main()
{
	const int SIZE = 6;
	const int array1[SIZE] = { 1,2,3,4,5,6 };
	const int array2[SIZE] = { 2,4,6,8,10,12 };

	displayValues(array1, SIZE);
	displayValues(array2, SIZE);

    return 0;
}

void displayValues(const int *numbers, int size)
{
	for (int count = 0; count < size; count++)
	{
		std::cout << *(numbers + count) << " ";
	}
	std::cout << std::endl;
}



