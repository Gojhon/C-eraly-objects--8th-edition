// P1024.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
struct ListNode
{
	double value;
	ListNode *next;

};

int main()
{
	ListNode * head;

	head = new ListNode;
	head->value = 12.5;
	head->next = NULL;


	ListNode *secondPtr = new ListNode;
	secondPtr->value = 13.5;
	secondPtr->next = NULL;
	head->next = secondPtr;

	std::cout << "First item is " << head->value << std::endl;
	std::cout << "Second item is " << head->next->value << std::endl;

    return 0;
}

