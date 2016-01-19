// P193.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <cctype>
int main()
{
	std::cout << "IS '?' an alphabetic character ? " << isalpha('?') << std::endl;
	std::cout << "IS 'X' an alphabetic character ? " << isalpha('X') << std::endl;
	std::cout << "IS 'x' an alphabetic character ? " << isalpha('x') << std::endl;

	std::cout << "Ask if(isalpha('x'==true)" << std::endl;
	if (isalpha('x') == true)
		std::cout << "The letter x IS an alphabetic character " << std::endl;
	else
		std::cout << "The letter x IS not alphabetic character " << std::endl;

	std::cout << "Ask if (isalpah('x')" << std::endl;

	if (isalpha('x'))
		std::cout << " The letter x IS an alphabetic character." << std::endl;
	else 
		std::cout << " The letter x IS NOT an alphabetic character." << std::endl;

    return 0;
}

