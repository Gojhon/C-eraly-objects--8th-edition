// P329.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include<vector>

void first() //first �Լ�
{
	std::cout << "I am now inside the function first" << std::endl;
}

void second() //second �Լ�
{
	std::cout << "I am now inside the funcion second" << std::endl;
}

int main()
{

	using DF = void(*)();
	std::vector<DF>datas = { first,second };
	for (auto& item : datas) {
		(*item)();

	}
	//std::cout << "I am starting in function main" << std::endl;
	//first();//first �Լ��� ȣ��(����)�Ѵ�.
	//second();//second �Լ��� ȣ��(����)�Ѵ�.
	//std::cout << "Back in function main again." << std::endl;
    return 0;
}

