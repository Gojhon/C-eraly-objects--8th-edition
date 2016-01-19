// P173.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

int main()
{
	double result = .666667 * 6.0;
	std::cout << "result= " << result << std::endl;

	if (abs(result - 4.0 < .00001))
		std::cout << "Result Does equal 4" << std::endl;
	else
		std::cout << "result Does not equal 4 " << std::endl;

    return 0;
}

