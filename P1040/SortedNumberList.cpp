#include"SortedNumberList.h"

void SortedNumberList::add(double number)
{
	ListNode *nodePtr, *previousNodePtr;

	if (head == NULL || head->value >= number)
	{
		head = new ListNode(number, head);

	}
	else
	{
		previousNodePtr = head;
		nodePtr = head->next;

		while (nodePtr != NULL &&nodePtr->value < number)
		{
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}
		previousNodePtr->next = new ListNode(number, nodePtr);
	}

}