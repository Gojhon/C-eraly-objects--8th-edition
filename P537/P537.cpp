// P537.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

void showValues(int intArrayp[], int size);
int main()
{
	const int Array_size = 8;
	int collection[Array_size] = { 5,10,15,20,25,30,35,40 };
	std::cout << "The array contains the values" << std::endl;
	showValues(collection, Array_size);

    return 0;
}
void showValues(int nums[], int size)
{
	for (int index = 0; index < size; index++)
		std::cout << nums[index] << " ";
	std::cout <<std::endl;

}

