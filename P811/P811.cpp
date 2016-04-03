// P811.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void stringCopy(char[], const char[]);

int main()
{
	const int S_LENGTH = 30;
	char dest[S_LENGTH], source[S_LENGTH];

	std::cout << "Enter a string with no more than " <<
		S_LENGTH - 1 << " charactesrs : " << std::endl;
	std::cin.getline(source, S_LENGTH);

	stringCopy(dest, source);

	std::cout << "The string you entered is:" << std::endl << dest << std::endl;

    return 0;
}
void stringCopy(char destStr[], const char sourceStr[])
{
	int index=0;
	while (sourceStr[index] != '\0')
	{
		destStr[index] = sourceStr[index];
		index++;
	}
	destStr[index] = '\0';

}

