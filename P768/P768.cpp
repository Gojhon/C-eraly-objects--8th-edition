// P768.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

class BaseDemo
{
public:
	BaseDemo()
	{
		std::cout << "This is the BaseDemo contructor." << std::endl;
	}
	~BaseDemo()
	{
		std::cout << "This is the BaseDemo destructor" << std::endl;

	}
};
class DeriDemo :public BaseDemo
{
public:
	DeriDemo()
	{
		std::cout << "This is the DeriDemo constructor. " << std::endl;
	}
	~DeriDemo()
	{
		std::cout << "This is the DeriDemo destructor." << std::endl;
	}
};


int main()
{
	std::cout << "We will now Create a DeriDemo object " << std::endl;
	DeriDemo object;
	std::cout << "The Program is now Going to end" << std::endl;
	return 0;
}

