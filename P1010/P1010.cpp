// P1010.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>


int main()
{
	std::vector<int> numbers;
	std::vector<int>::iterator iter;

	for (int x = 0; x < 10; x++)
		numbers.push_back(x);

	std::random_shuffle(numbers.begin(), numbers.end());

	std::cout << "The numbers in the vector are : " << std::endl;

	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;

	iter = std::max_element(numbers.begin(), numbers.end());
	std::cout << "The largest value in the Vector is " << *iter << std::endl;

	iter = std::min_element(numbers.begin(), numbers.end());
	std::cout << "The smallest value in the Vector is " << *iter << std::endl;



    return 0;
}

