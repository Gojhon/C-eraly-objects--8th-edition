// P872.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>

int main()
{
	char ch;
	std::fstream file("letters.txt", std::ios::in);
	if (!file)
	{
		std::cout << "Error opening file.";
		return 0;
	}

	file.seekg(5L, std::ios::beg);
	file.get(ch);
	std::cout << "Byte 5 from beginning : " << ch << std::endl;

	file.seekg(-10L, std::ios::end);
	file.get(ch);
	std::cout << "Byte 10 from end: " << ch << std::endl;

	file.seekg(3L, std::ios::cur);
	file.get(ch);
	std::cout << "Byte 3 from current : " << ch << std::endl;
	file.close();

    return 0;
}

