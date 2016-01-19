// P301.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include< string>
int main()
{
	std::ifstream inputFIle;
	std::string filename;
	int number;

	std::cout << "Enter the filename: ";
	std::cin >> filename;

	inputFIle.open(filename.c_str());

	if (inputFIle)
	{
		while (inputFIle >> number)
			std::cout << number << std::endl;

		inputFIle.close();
	}
	else
	{
		std::cout << "Error opening the file." << std::endl;
	}
    return 0;
}

