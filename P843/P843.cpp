// P843.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>


int main()
{
	int a, b;
	std::cout << "Enter two decimal numbers: ";
	std::cin >> a >> b;
	std::cout << "The numbers in decimal: " << a << '\t' << b << std::endl;
	std::cout << "The numbers in hexadecimal: " << std::hex << std::showbase
		<< a << '\t' << b << std::endl;
	std::cout << "Te numbers in octal: " << std::oct << a << '\t' << b << std::endl;

	std::cout << "Enter two hexadecimal numbers: ";
	std::cin >> std::hex >> a >> b;
	std::cout << "You entered decimal " << std::dec << a << '\t' << b << std::endl;
	
	std::cout << "Enter two octal numbers: ";
	std::cin >> std::oct >> a >> b;
	std::cout << "You entered decimal " << std::dec << a << '\t' << b << std::endl;


	return 0;
}


