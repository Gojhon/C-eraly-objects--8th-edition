// P132.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

