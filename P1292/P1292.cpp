// P1292.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
namespace demo
{
	class NsDemo
	{
	public:
		int x, y, z;
	};
	NsDemo testObject;
}

int main()
{
	demo::testObject.x = 10;
	demo::testObject.y = 20;
	demo::testObject.z = 30;

	std::cout << "The values are: " << std::endl;
	std::cout << demo::testObject.x << " " << demo::testObject.y << " " << demo::testObject.z << std::endl;

    return 0;
}

