#pragma once
#include<iostream>
class DynIntStack
{
private:
	class StackNode
	{
		friend class DynIntStack;
		int value;
		StackNode *next;
		StackNode(int value1, StackNode *next1 =NULL)
		{
			value = value1;
			next = next1;
		}
	};
	StackNode *top;
public:
	DynIntStack() { top = NULL; }
	void push(int);
	void pop(int&);
	bool isEmpty()const;

};