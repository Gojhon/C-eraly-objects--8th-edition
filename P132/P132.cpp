// P132.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<cmath>
int main()
{
	double a, b, c;
	std::cout << "Enter the Length of side a: ";
	std::cin >> a;
	std::cout << "Enter the Length of side b: ";
	std::cin >> b;
	c = sqrt(pow(a, 2.0) + pow(b, 2.0));

	std::cout << "The length of the hypotenuse is ";
	std::cout << c << std::endl;


    return 0;
}

