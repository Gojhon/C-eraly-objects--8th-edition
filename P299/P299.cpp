// P299.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

