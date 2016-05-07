// P877.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>

const int DESC_SIZE = 31, NUM_RECORDS = 5;
struct Invtry
{
	char desc[DESC_SIZE];
	int qty;
	double price;

};

int main()
{
	Invtry record = { "",0,0.0 };
	std::fstream invetory("invtry.dat", std::ios::out | std::ios::binary);
	if (!invetory)
	{
		std::cout << "Error opening file";
		return 0;
	}
	for (int count = 0; count < NUM_RECORDS; count++)
	{
		std::cout << "Now writing record " << count << std::endl;
		invetory.write(reinterpret_cast<char *>(&record), sizeof(record));
	}

	invetory.close();

    return 0;
}

