// P838.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

int main()
{
	std::fstream inOutFile;
	std::string word;

	inOutFile.open("inout.txt");
	if (inOutFile.fail())
	{
		std::cout << "The file was not found." << std::endl;
		return 1;
	}
	while (inOutFile >> word)
	{
		std::cout << word << std::endl;
	}
    return 0;

	inOutFile.clear();
	inOutFile << "Hello" << std::endl;
	inOutFile.close();

}

