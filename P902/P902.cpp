// P902.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void message(int);


int main()
{
	message(3);
    return 0;
}

void message(int times)
{
	std::cout << "Message " << times << ". " << std::endl;
	if (times > 0)
	{
		message(times - 1);
	}
	std::cout << "Message " << times << " is returning." << std::endl;
}
