#pragma once

#include<iostream>

class NumberList2
{
protected:
	struct ListNode
	{
		double value;
		ListNode *next;
		ListNode(double value1, ListNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}

	};
	ListNode *head;
public:
	NumberList2() { head = NULL; } //생성자
	~NumberList2(); //소멸자
	void add(double value) //입력된 값을 추가
	{
		head = add(head, value);
	}
	void remove(double value) //입력된 값을 삭제
	{
		head = remove(head, value);
	}
	void displayList()const { displayList(head); }
	int size()const { return size(head); }
private:
	ListNode *add(ListNode *aList, double value);
	ListNode *remove(ListNode *aList, double value);
	void displayList(ListNode *aList)const;
	int size(ListNode *aList)const;

};