// P115.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
int main()
{
	double x = 6.0;
	std::cout << x << std::endl;
	std::cout << std::showpoint << x << std::endl;
	std::cout << std::setprecision(2) << x << std::endl;
	std::cout << std::fixed << x << std::endl;

    return 0;
}

