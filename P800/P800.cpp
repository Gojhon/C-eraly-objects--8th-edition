// P800.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>

int main()
{
	const int NAME_LENGTH = 30;
	char name1[NAME_LENGTH], name2[NAME_LENGTH];

	std::cout << "Enter a name(last name first): ";
	std::cin.getline(name1, NAME_LENGTH);
	std::cout << "ENter another name:";
	std::cin.getline(name2, NAME_LENGTH);
	std::cout << "Here are the names sorted alphabetically: " << std::endl;
	if (strcmp(name1, name2) < 0)
	{
		std::cout << name1 << std::endl << name2 << std::endl;
	}
	else if (strcmp(name1, name2) > 0)
	{
		std::cout << name2 << std::endl << name1 << std::endl;
	}
	else
		std::cout << "You entered the same name twice!" << std::endl;

	return 0;
}

