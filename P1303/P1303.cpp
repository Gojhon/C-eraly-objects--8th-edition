// P1303.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int main(int argc,char *argv[])
{
	std::cout << "You entered " << (argc - 1)
		<< "  command line arguments." << std::endl;
	if (argc > 1)
	{
		std::cout << "Here they are : " << std::endl;
		for (int count = 1; count < argc; count++)
			std::cout << argv[count] << std::endl;
	}

    return 0;
}

