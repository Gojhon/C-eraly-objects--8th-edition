// P864.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>

int main()
{
	std::fstream file("nums.dat", std::ios::out | std::ios::binary);
	if (!file)
	{
		std::cout << "Error opening file.";
		return 0;
	}
	int buffer[] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(buffer) / sizeof(buffer[0]);

	std::cout << "Now writing the data to the file" << std::endl;
	file.write(reinterpret_cast<char *>(buffer), sizeof(buffer));
	file.close();

	file.open("nums.dat", std::ios::in);
	if (!file)
	{
		std::cout << "Error opening file.";
		return 0;
	}
	std::cout << "Now reding the data back into memory." << std::endl;
	file.read(reinterpret_cast<char *>(buffer), sizeof(buffer));


	for (int count = 0; count < size; count++)
	{
		std::cout << buffer[count] << " ";
	}
	file.close();

    return 0;
}

