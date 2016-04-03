// P742.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "intarray.h"
#include<iostream>

int main()
{
	IntArray table(10);
	table.test() = 10;
	table[2] = 10;

	for (auto it = std::begin(table); it != std::end(table); ++it)
	{
		auto& m = *it;
	}

	for (int x = 0; x < table.size(); x++)
		table[x] = (x * 2);

	for (int x = 0; x < table.size(); x++)
		std::cout << table[x] << " ";
	std::cout << std::endl;

	for (int x = 0; x < table.size(); x++)
		table[x] = table[x] + 5;

	for (int x = 0; x < table.size(); x++)
		std::cout << table[x] << " ";
	std::cout << std::endl;
	
	for (int x = 0; x < table.size(); x++)
		table[x]++;


	for (int x = 0; x < table.size(); x++)
		std::cout << table[x] << " ";

	std::cout << std::endl;
return 0;
}

