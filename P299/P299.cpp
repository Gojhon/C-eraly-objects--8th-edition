// P299.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

int main()
{
	std::ifstream inputFile;
	int number;

	inputFile.open("ListOfNumbers.txt");

	if (inputFile)
	{
		while (inputFile >> number)
			std::cout << number << std::endl;

		inputFile.close();
	}
	else
	{
		std::cout << "Error Opening the File" << std::endl;
	}
    return 0;
}

