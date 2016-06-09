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
	NumberList2() { head = NULL; }
	~NumberList2();
	void add(double value)
	{
		head = add(head, value);
	}
	void remove(double value)
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