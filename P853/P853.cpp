// P853.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>

int main()
{
	std::string fileName;
	std::fstream file;
	char ch;

	std::cout << "Enter a file name:";
	std::cin >> fileName;

	file.open(fileName.c_str(), std::ios::in);
	if(!file)
	{
		std::cout << fileName << " could not be opend" << std::endl;
		return 1;
	}
	ch = file.get();
	while (ch != EOF)
	{
		std::cout << ch;
		ch = file.get();
	}
	file.close();
    return 0;
}

