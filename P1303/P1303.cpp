// P1303.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

