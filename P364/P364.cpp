// P364.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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