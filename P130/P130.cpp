// P130.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

