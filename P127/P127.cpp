// P127.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int size = 12;
	char name1[size], name2[size];

	strcpy(name1, "Sebastian");
	std::cout << "name1 now holds the String" << name1 << std::endl;

	strcpy(name2, name1);
	std::cout << "name2 now holds the String" << name2 << std::endl;


    return 0;
}

