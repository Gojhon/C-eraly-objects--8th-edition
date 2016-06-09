// P1026.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>

struct ListNode
{
	double value;
	ListNode *next;
	ListNode(double valuel, ListNode *next1 = NULL)
	{
		value = valuel;
		next = next1;
	}
};

int main()
{
	double number;
	ListNode *numberList = NULL;

	std::ifstream numberFIle("numberFIle.dat");
	if (!numberFIle)
	{
		std::cout << "Error in openning the file of numbers.";
		exit(1);
	}

	std::cout << "The contentso f the file are : " << std::endl;
	while (numberFIle >> number)
	{
		std::cout << number << " ";
		numberList = new ListNode(number, numberList);
	}

	std::cout << std::endl << "The contents of the list are : " << std::endl;
	ListNode *ptr = numberList;
	while (ptr != NULL)
	{
		std::cout << ptr->value << " ";
		ptr = ptr->next;
	}

    return 0;
}

