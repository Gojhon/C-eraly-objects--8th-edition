// P1011.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	{
		numbers.push_back(x);
	}

	std::cout << "The numbers in the vector are:" << std::endl;

	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl << std::endl;

	iter = std::find(numbers.begin(), numbers.end(), 7);

	std::cout << "The value searched for is " << *iter << std::endl;

    return 0;
}

