// P1304.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

int main(int argc,char *argv[])
{
	double total = 0;
	if (argc > 1)
	{
		for (int count = 1; count < argc; count++)
			total += atof(argv[count]);
		std::cout << total << std::endl;
	}
    return 0;
}

