// P128.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
int main()
{
	const int Size = 5;
	char word[Size];

	std::cout << "Enter a word ";
	std::cin >> std::setw(Size) >> word;
	std::cout << "You Entered " << word << std::endl;
    return 0;
}

