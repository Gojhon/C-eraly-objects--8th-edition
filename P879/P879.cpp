// P879.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	long recNum;
	
	std::fstream inventory("invtry.dat", std::ios::in | std::ios::out);

	if (!inventory)
	{
		std::cout << "Error opening file.";
		return 0;
	}
	std::cout << "Which record do you want to edit";
	std::cin >> recNum;

	inventory.seekg(recNum * sizeof(record), std::ios::beg);
	inventory.read(reinterpret_cast<char *>(&record), sizeof(record));

	std::cout << "Description : ";
	std::cout << record.desc << std::endl;
	std::cout << "Quantity : ";
	std::cout << record.qty << std::endl;
	std::cout << "Enter the new data: " << std::endl;
	std::cout << "Description: ";
	std::cin.ignore();
	std::cin.getline(record.desc, DESC_SIZE);
	std::cout << "Quantity : ";
	std::cin >> record.qty;
	std::cout << "Price: ";
	std::cin >> record.price;
	inventory.seekp(recNum * sizeof(record), std::ios::beg);
	inventory.write(reinterpret_cast<char *>(&record), sizeof(record));


	inventory.close();
	return 0;
}

