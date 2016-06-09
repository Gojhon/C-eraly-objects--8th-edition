#pragma once

#include<iostream>

class NumberList
{
protected:
	struct ListNode
	{
		double value;
		ListNode *next;
		ListNode(double valuel, ListNode * next1 = NULL)
		{
			value = valuel;
			next = next1;
		}
	};
	ListNode *head;
public :
	NumberList() { head = NULL; }
	~NumberList();
	void add(double number);
	void remove(double number);
	void displayList()const;

};