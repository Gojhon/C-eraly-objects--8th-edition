// P813.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void nameSlice(char[]);

int main()
{
	const int NAME_LENGTH = 41;

	char name[NAME_LENGTH];

	std::cout << "Enter your first and last names, separted ";
	std::cout << "by a space:" << std::endl;
	std::cin.getline(name, NAME_LENGTH);

	nameSlice(name);
	std::cout << "Your first name is: " << name << std::endl;

    return 0;
}

void nameSlice(char userName[])
{
	int k = 0;
	while (userName[k] != ' '&& userName[k] != '\0')
		k++;

	if (userName[k] == ' ')
		userName[k] = '\0';

}

