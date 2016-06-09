// P1045.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>

struct ListNode
{
	double value;
	ListNode * next;
	ListNode(double value1, ListNode *next1 = NULL)
	{
		value = value1;
		next = next1;
	}

};
int size(ListNode *);
void displayList(ListNode *);


int main()
{
	ListNode *numberList = NULL;
	double number;

	std::ifstream numberFIle("numberFile.dat");
	if (!numberFIle)
	{
		std::cout << "Error in opening the file of number";
		exit(1);
	}

	while (numberFIle >> number)
	{
		numberList = new ListNode(number, numberList);
	}
	std::cout << std::endl << "The contents of the list are : " << std::endl;
	displayList(numberList);

	std::cout << std::endl << "The number of items in the list is: " << size(numberList) << std::endl;


    return 0;
}

int size(ListNode *ptr)
{
	if (ptr == NULL)
		return 0;
	else
		return 1 + size(ptr->next);
}

void displayList(ListNode *ptr)
{
	if (ptr != NULL)
	{
		std::cout << ptr->value << " ";
		displayList(ptr->next);
	}
}