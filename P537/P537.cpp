// P537.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
template<typename T, std::size_t n>
void showValues(int intArrayp[]);
int main()
{
	const int Array_size = 8;
	int collection[Array_size] = { 5,10,15,20,25,30,35,40 };
	//decay

	std::cout << "The array contains the values" << std::endl;
	showValues(collection);

    return 0;
}
template<typename T, std::size_t n>
void showValues(T (&nums)[n])//decay->*int
{
	for(auto&& item :: nums)
	std::cout <<std::endl;

}

