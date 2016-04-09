// P838.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

