// P130.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	const int Size = 81;
	char sentence[Size];
	std::cout << "Enter a Sentence: ";
	std::cin.getline(sentence, Size);
	std::cout << "You Entered " << sentence << std::endl;

    return 0;
}

