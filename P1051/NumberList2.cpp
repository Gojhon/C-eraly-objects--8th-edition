#include "NumberList2.h"


int NumberList2::size(ListNode *aList)const
{ //��ü�� ������ ���� üũ�Ѵ�
	if (aList == NULL)
		return 0;
	else
		return 1 + size(aList->next);
}

void NumberList2::displayList(ListNode *aList)const
{  //ListNode�� �Էµ� ���� ����Ѵ�.
	if (aList != NULL)
	{
		std::cout << aList->value<<" ";
		displayList(aList->next);
	}
}
NumberList2::ListNode *NumberList2::add(ListNode *aList, double value)
{   //ListNode�� �Էµ� ���� �߰��Ѵ�.
	if (aList == NULL) //����� ���� NULL�ϰ��
		return new ListNode(value);//���� �߰��Ѵ�.
	else
	{
		aList->next = add(aList->next, value); //���� �ɶ����� ȣ���Ѵ�.
		return aList;
	}
}

NumberList2::ListNode *NumberList2::remove(ListNode *aList, double value)
{
	if (aList == NULL)return NULL; //���� ������ NULL�� ȣ���Ѵ�.

	if (aList->value == value)
	{//����Ʈ�� ���� �����Ѵ�.
		ListNode *tail = aList->next;
		delete aList;
		return tail;
	}
	else
	{ //���� ���ö����� remove�� ȣ���Ѵ�.
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

















