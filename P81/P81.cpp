// P81.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int whole;
	double fracional;
	char letter;

	std::cout << "Enter an integer a double, and a character: ";
	std::cin >> whole >> fracional >> letter;

	std::cout << "whole: " << whole << std::endl;
	std::cout << "fractional : " << fracional << std::endl;
	std::cout << "letter: " << letter << std::endl;

    return 0;
}

