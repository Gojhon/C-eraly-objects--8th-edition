#include "NumberList2.h"


int NumberList2::size(ListNode *aList)const
{
	if (aList == NULL)
		return 0;
	else
		return 1 + size(aList->next);
}

void NumberList2::displayList(ListNode *aList)const
{
	if (aList != NULL)
	{
		std::cout << aList->value<<" ";
		displayList(aList->next);
	}
}
NumberList2::ListNode *NumberList2::add(ListNode *aList, double value)
{
	if (aList == NULL)
		return new ListNode(value);
	else
	{
		aList->next = add(aList->next, value);
		return aList;
	}
}

NumberList2::ListNode *NumberList2::remove(ListNode *aList, double value)
{
	if (aList == NULL)return NULL;

	if (aList->value == value)
	{
		ListNode *tail = aList->next;
		delete aList;
		return tail;
	}
	else
	{
		aList->next = remove(aList->next, value);
		return aList;
	}

}

NumberList2::~NumberList2()
{
	ListNode *ptr = head;
	while (ptr != NULL)
	{
		ListNode *garbage = ptr;
		ptr = ptr->next;
		delete garbage;
	}
}

















