// P858.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>


int main()
{
	char ch;
	std::fstream ioFile("rewind.txt", std::ios::in);

	if (!ioFile)
	{
		std::cout << "Error in trying to create file";
		return 0;
	}
	ioFile << "All good dogs " << std::endl;
	std::cout << "growl, bark,and eat." << std::endl;
	ioFile.close();

	ioFile.open("rewind.txt", std::ios::in);
	if (!ioFile)
	{
		std::cout << "Error in trying to open file";
		return 0;
	}

	ioFile.get(ch);
	while (!ioFile.fail())
	{
		std::cout.put(ch);
		ioFile.get(ch);
	}
	ioFile.get(ch);
	while (!ioFile.fail())
	{
		std::cout.put(ch);
		ioFile.get(ch);
	}
    return 0;
}

