// P902.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
