// P813.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

