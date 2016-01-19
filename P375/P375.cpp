// P375.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>

void readFile(std::ifstream&);

int main()
{

	std::ifstream dataIn;
	dataIn.open("weather.dat");
	if (dataIn.fail())
	{
		std::cout << "Error Openin ata file" << std::endl;
	}
	else
	{
		readFile(dataIn);
		dataIn.close();
	}

	return 0;
}
void readFile(std::ifstream &somFile)
{
	int temperature;
	std::string std;
	while (somFile >> std)
		std::cout << std << "  ";
	std::cout<<std::endl;
}
