// P68.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	double shares = 220.0;
	double avgPrice = 14.67;

	std::cout << "There were " << shares << " shares sold at $";
	std::cout << avgPrice << "Per share" << std::endl;

	return 0;
}

