// P850.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>

int main()
{
	std::fstream nameFIle;
	std::string input;

	nameFIle.open("mruphy.txt", std::ios::in);
	if (!nameFIle)
	{
		std::cout << "FIle open error!" << std::endl;
		return 0;
	}
	std::getline(nameFIle, input);
	while(nameFIle)
	{
		std::cout << input << std::endl;
		std::getline(nameFIle, input);
	}
	nameFIle.close();

    return 0;
}

