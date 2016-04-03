// P798.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>

int main()
{
	const int LENGTH = 40;
	char firstString[LENGTH], secondString[LENGTH];

	std::cout << "ENter a string :";
	std::cin.getline(firstString, LENGTH);
	std::cout << "Enter another string :";
	std::cin.getline(secondString, LENGTH);

	if (strcmp(firstString, secondString))
		std::cout << "You entered the same string twice.";
	else
		std::cout << "The  string are not the same" << std::endl;


    return 0;
}

