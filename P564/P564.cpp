// P564.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<vector>


int main()
{
	std::vector<int> values;
	values.reserve(values.size() + 20);
	for (int i = 0; i < 20;i++)
	{
		values.push_back(i);
		std::cout << "size=" << values.size() << ",cap=" << values.capacity();
	}
	std::cout << "The Values Vector has " << values.size() << "elements." << std::endl;
	std::cout << "I will call the clear Member Function..." << std::endl;

	values.clear();
	std::cout << "Now the Values Vector has " << values.size() << " elements" << std::endl;
    return 0;
}

