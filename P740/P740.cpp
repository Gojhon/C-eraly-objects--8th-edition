// P740.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<string>
#include<iostream>

int main()
{
	std::string name = "William";
	std::cout << "Here are the Letters in your name : " << std::endl;
	for (int x = 0; x < name.length(); x++)
	{
		std::cout << name[x] << " ";
	}
	std::cout << std::endl << "Enter a character and press Enter: ";
	std::cin >> name[2];
	std::cout << "Now, here are the letters in your name: " << std::endl;
	for (int x = 0; x < name.length(); x++)
	{
		std::cout << name[x] << " ";
	}
    return 0;
}

