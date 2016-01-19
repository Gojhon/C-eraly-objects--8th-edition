// P118.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string name;
	std::string city;

	std::cout << "Please Enter your name";
	std::cin >> name;
	std::cout << "Enter the City you live in:";
	std::cin >> city;

	std::cout << "Hello , " << name << std::endl;
	std::cout << "You live in " << city << std::endl;

    return 0;
}

