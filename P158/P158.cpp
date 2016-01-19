// P158.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	bool trueValue, falseValue;
	int x = 5, y = 10;
	
	trueValue = (x < y);
	falseValue = (y == x);


	std::cout << "True is " << trueValue << std::endl;
	std::cout << "False is " << falseValue << std::endl;

    return 0;
}

