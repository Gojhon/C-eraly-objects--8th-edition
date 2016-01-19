// P120.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string> 
#include <iostream>


int main()
{
	std::string name;
	std::string city;

	std::cout <<"Please Enter your name ";
	std::getline(std::cin, name);
	std::cout << "Enter The city you live in: ";
	std::getline(std::cin, city);

	std::cout << "Hello, " << name << std::endl;
	std::cout << "You Live in " << city << std::endl;


    return 0;
}

