// P201.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	char ch;

	std::cout << "Enter a digit or a letter: ";
	ch = std::cin.get();
	if (ch >= '0'&&ch <= '9')
		std::cout << "You entered a digit" << std::endl;
	else if (ch >= 'A'&&ch <= 'Z')
		std::cout << "You entered an uppercase letter" << std::endl;
	else if (ch >= 'a'&&ch <= 'z')
		std::cout << "You entered a lowecae letter " << std::endl;
	else
		std::cout << "That os mpt a digit letter " << std::endl;
	return 0;
}

