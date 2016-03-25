// P536.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
void showValue(int);

int main()
{ 
	const int Array_size = 8;
	int collection[Array_size] = { 5,10,15,20,25,30,35,40 };

	for (auto&& value: collection)
		showValue(value);
	std::cout << std::endl;
	return 0;
}
void showValue(int num)
{
	std::cout << num << " ";
}

