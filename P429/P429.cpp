// P429.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

class Demo
{
public:
	Demo();
	~Demo();
};

Demo::Demo()
{
	std::cout << "An object has just been defined,so the constructor" << "is running " << std::endl;
}

Demo::~Demo()
{
	std::cout << "Now the destructor is running" << std::endl;
}
int main()
{
	Demo obj;
	std::cout << "The object now exists, but is about to be destroyed " << std::endl;
    return 0;
}

