// P536.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
void showValue(int);

int main()
{ 
	const int Array_size = 8;
	int collection[Array_size] = { 5,10,15,20,25,30,35,40 };

	for (int index = 0; index < Array_size; index++)
		showValue(collection[index]);
	std::cout << std::endl;
	return 0;
}
void showValue(int num)
{
	std::cout << num << " ";
}
