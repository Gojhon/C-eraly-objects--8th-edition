// P424.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

