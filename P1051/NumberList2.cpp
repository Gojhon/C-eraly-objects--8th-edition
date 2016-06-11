#include "NumberList2.h"


int NumberList2::size(ListNode *aList)const
{ //객체의 사이즈 값을 체크한다
	if (aList == NULL)
		return 0;
	else
		return 1 + size(aList->next);
}

void NumberList2::displayList(ListNode *aList)const
{  //ListNode에 입력된 값을 출력한다.
	if (aList != NULL)
	{
		std::cout << aList->value<<" ";
		displayList(aList->next);
	}
}
NumberList2::ListNode *NumberList2::add(ListNode *aList, double value)
{   //ListNode에 입력된 값을 추가한다.
	if (aList == NULL) //노드의 값이 NULL일경우
		return new ListNode(value);//값을 추가한다.
	else
	{
		aList->next = add(aList->next, value); //널이 될때까지 호출한다.
		return aList;
	}
}

NumberList2::ListNode *NumberList2::remove(ListNode *aList, double value)
{
	if (aList == NULL)return NULL; //값이 없으면 NULL을 호출한다.

	if (aList->value == value)
	{//리스트의 값을 삭제한다.
		ListNode *tail = aList->next;
		delete aList;
		return tail;
	}
	else
	{ //값이 나올때까지 remove를 호출한다.
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

















