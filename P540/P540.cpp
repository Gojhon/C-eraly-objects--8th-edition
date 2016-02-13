// P540.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

typedef int arrytype[];

void doubleArray(arrytype, int);
void showValues(arrytype, int);

int main()
{
	const int array_size = 7;
	arrytype set = { 1,2,3,4,5,6,7 };
	std::cout << "The arrays values are: " << std::endl;
	showValues(set, array_size);

	doubleArray(set, array_size);
	std::cout << std::endl << "After calling doubleArray, the values are : " << std::endl;
	showValues(set, array_size);
	std::cout << std::endl;

    return 0;
}

void doubleArray(arrytype nums, int size)
{
	for (int index = 0; index < size; index++)
		nums[index] *= 2;
}

void showValues(arrytype nums, int size)
{
	for (int index = 0; index < size; index++)
		std::cout << nums[index] << " ";
	std::cout << std::endl;
}
