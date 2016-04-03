// P740.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

