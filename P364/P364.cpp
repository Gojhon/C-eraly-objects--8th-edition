// P364.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

void showStatic();
int numCalls = 0;
int main()
{

	for (int count = 0; count < 5; count++)
		showStatic();
    return 0;
}

void showStatic()
{
	//static 
	std::cout << "This function has been Called " << ++numCalls << " times " << std::endl;

}