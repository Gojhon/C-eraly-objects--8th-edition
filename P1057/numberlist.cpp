#include "NumberList.h"
#include <iostream>
using namespace std;

NumberList::~NumberList()
{
	ListNode *nodePtr = head;
	while (nodePtr != nullptr)
	{
		ListNode *garbage = nodePtr;
		nodePtr = nodePtr->next;
		delete garbage;
	}
}

void NumberList::add(double number)
{
	if (head == nullptr)
		head = new ListNode(number);
	else
	{
		ListNode *nodePtr = head;
		while (nodePtr->next != nullptr)
			nodePtr = nodePtr->next;
		nodePtr->next = new ListNode(number);
	}
}

void NumberList::remove(double number)
{
	ListNode *nodePtr, *previousNodePtr;
	if (!head) return;
	if (head->value == number)
	{
		nodePtr = head;
		head = head->next;
		delete nodePtr;
	}
	else
	{
		nodePtr = head;
		while (nodePtr != NULL && nodePtr->value != number)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr)
		{
			previousNodePtr->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

void NumberList::displayList() const
{
	ListNode *nodePtr = head;
	while (nodePtr)
	{
		cout << nodePtr->value << "   ";
		nodePtr = nodePtr->next;
	}
}