// P562.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>

void showValues(std::vector<int>);

int main()
{
	std::vector<int>values;

	for (int count = 0; count < 7; count++)
	{
		values.push_back(count * 2);
	}
	
	showValues(values);

    return 0;
}

void showValues(std::vector<int> vect)
{
	for (int count = 0; count < vect.size(); count++)
		std::cout << vect[count] << " ";
	for (auto&& item : vect)
	{
		std::cout << item << " ";
	}
	std::cout<<std::endl;
}
