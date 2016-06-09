// P1057.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "reliablenurnberlist.h"
#include<iostream>
int main()
{
	ReliableNumberList squareList, cubeList;

	for (int k = 1; k <= 5; k++)
	{
		squareList.add(k*k);
		cubeList.add(k*k*k);
	}

	ReliableNumberList otherList(squareList);
	std::cout << "Result of the copy consructor is : ";
	otherList.displayList();
	std::cout << std::endl;

	otherList = cubeList;
	std::cout << "Result of assignment is:       ";
	otherList.displayList();
	std::cout << std::endl;

    return 0;
}

