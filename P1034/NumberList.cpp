#include "NumberList.h"

void NumberList::add(double number)
{
	if (head == NULL)
		head = new ListNode(number);
	else
	{
		ListNode * nodePtr = head;
		while (nodePtr->next != NULL)
			nodePtr = nodePtr->next;
		nodePtr->next = new ListNode(number);

	}
}
void NumberList::displayList()const
{
	ListNode *nodePtr = head;
	while (nodePtr)
	{
		std::cout << nodePtr->value << "     ";
		nodePtr = nodePtr->next;
	}
}

NumberList::~NumberList()
{
	ListNode *nodePtr = head;
	while (nodePtr != NULL)
	{
		ListNode *garbage = nodePtr;
		nodePtr = nodePtr->next;

		delete garbage;
	}
}