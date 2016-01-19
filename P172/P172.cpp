// P172.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	double result = .66667 * 6.0;
	std::cout << "Result = " << result << std::endl;

	if (result == 4.0)
		std::cout << "result DOES equlal 4!" << std::endl;
	else
		std::cout << "Result Does not equal 4" << std::endl;

    return 0;
}

