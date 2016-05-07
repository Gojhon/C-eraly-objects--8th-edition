// P878.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
const int DESC_SIZE = 31;

struct Invtry
{
	char desc[DESC_SIZE];
	int qty;
	double price;
};

int main()
{
	Invtry record;
	
	std::fstream inventory("invtry.dat", std::ios::in | std::ios::binary);
	if (!inventory)
	{
		std::cout << "Error in opening the file.";
		return 0;
	}

	inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	while (!inventory.eof())
	{
		std::cout << "Description:";
		std::cout << record.desc << std::endl;
		std::cout << "Quantity: ";
		std::cout << record.qty << std::endl;
		std::cout << "price: ";
		std::cout << record.price << std::endl<<std::endl;
		inventory.read(reinterpret_cast<char *>(&record), sizeof(record));
	}
	inventory.close();
    return 0;
}