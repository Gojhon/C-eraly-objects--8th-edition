// P846.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>

void showState(std::fstream &);

int main()
{
	std::fstream testfile("stuff.dat", std::ios::out);
	if (testfile.fail())
	{
		std::cout << "cannot open the file." << std::endl;
		return 0;
	}
	int num = 10;
	std::cout << "Writing to the file" << std::endl;
	testfile << num;
	showState(testfile);
	testfile.close();

	testfile.open("stuff.dat", std::ios::in);
	if (testfile.fail())
	{
		std::cout << "cannot open the file" << std::endl;
		return 0;
	}
	std::cout << "Reading from the file" << std::endl;
	testfile >> num;
	showState(testfile);

	std::cout << "Forcing a bad read operation " << std::endl;
	testfile >> num;
	showState(testfile);

	testfile.close();

    return 0;
}

void showState(std::fstream &file)
{
	std::cout << "FIle status: " << std::endl;
	std::cout << "eof bit: " << file.eof() << std::endl;
	std::cout << "fail bit: " << file.fail() << std::endl;
	std::cout << "bad bit: " << file.bad() << std::endl;
	std::cout << "good bit: " << file.good() << std::endl;
	file.clear();

}
