// P855.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>


int main()
{
	char ch;
	int number;

	std::string fileName;
	std::fstream inFIle, outFile;

	std::cout << "Enter a file name: ";
	std::cin >> fileName;
	inFIle.open(fileName.c_str(), std::ios::in);
	if (!inFIle)
	{
		std::cout << "Cannot open file " << fileName;
		return 1;
	}
	outFile.open("modified.txt", std::ios::out);
	if (!outFile)
	{
		std::cout << "Cannot open the output file";
		return 2;
	}
	ch = inFIle.peek();
	while (ch!=EOF)
	{
		if (isdigit(ch))
		{
			inFIle >> number;
			outFile << number + 1;
		}
		else
		{
			ch = inFIle.get();
			outFile << ch;
		}
		ch = inFIle.peek();
	}
	inFIle.close();
	outFile.close();
    return 0;
}

