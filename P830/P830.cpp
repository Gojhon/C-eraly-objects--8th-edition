// P830.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	extern char**environ;
	int k = 0;
	while (environ[k] != 0)
	{
		std::cout << environ[k] << std::endl;
		k++;
	}

    return 0;
}

