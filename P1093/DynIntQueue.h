#pragma once
#include<iostream>

class DynIntQueue
{
private:
	class QueueNode
	{
		friend class DynIntQueue;
		int value;
		QueueNode *next;
		QueueNode(int value1, QueueNode *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};

	QueueNode *front;
	QueueNode *rear;

public:
	DynIntQueue();
	~DynIntQueue();
	void enqueue(int);
	void dequeue(int &);
	bool isEmpty()const;
	void clear();

};