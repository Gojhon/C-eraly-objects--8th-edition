// P363.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

void showLocal();

int main()
{
	
	showLocal();
	showLocal();
    return 0;
}

void showLocal()
{
	 int localNum = 5;
	std::cout << "localNum is " << localNum << std::endl;
	localNum = 99;
}