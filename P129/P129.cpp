// P129.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	const int size = 5;
	char word[size];
	std::cout << "Enter a word : ";
	std::cin.width(size);
	std::cin >> word;
	std::cout << "You entered " << word << std::endl;

    return 0;
}

