// P563.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<vector>
#include<iostream>

int main()
{

	std::vector<int>values;

	values.push_back(1);
	values.push_back(2);
	values.push_back(3);

	//values.front() = std::move(values.back());//1,2,3,4=>4,2,3,4
	//values.pop_back();//->4,2,3


	std::cout << "The size of values is " << values.size() << values.back()<<std::endl;
	
	std::cout << "Popping a Value from the Vector...." << std::endl;
	values.pop_back();
	std::cout << "The size of value is now " << values.size() << std::endl;

	std::cout << "Popping a Value from the Vector...." << std::endl;
	values.pop_back();
	std::cout << "The size of value is now " << values.size() << std::endl;


	std::cout << "Popping a Value from the Vector...." << std::endl;
	values.pop_back();
	std::cout << "The size of value is now " << values.size() << std::endl;


    return 0;
}

