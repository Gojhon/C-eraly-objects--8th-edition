// P424.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

class Demo
{
public:
	Demo()
	{
		std::cout << "the constructor is Running " << std::endl;
	}
};
int main()
{
	std::cout << "Is displayed before the object is created ." << std::endl;
	Demo demoObj;
	std::cout << "Is displyed after the object is created  " << std::endl;

    return 0;
}

