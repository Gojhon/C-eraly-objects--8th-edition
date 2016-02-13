// P537.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

