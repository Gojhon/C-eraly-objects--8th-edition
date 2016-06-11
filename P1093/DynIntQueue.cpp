#include"DynIntQueue.h"
#include<iostream>

DynIntQueue::DynIntQueue()
{
	front = NULL;
	rear = NULL;
}

DynIntQueue::~DynIntQueue()
{
	clear();
}

void DynIntQueue::enqueue(int num)
{
	if (isEmpty())
	{
		front = new QueueNode(num);
		rear = front;
	}
	else
	{
		rear->next = new QueueNode(num);
		rear = rear->next;
	}
}


void DynIntQueue::dequeue(int &num)
{
	QueueNode *temp;
	if (isEmpty())
	{
		std::cout << "The queue is empty" << std::endl;
		exit(1);
	}
	else
	{
		num = front->value;
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool DynIntQueue::isEmpty() const
{
	if (front == NULL)
		return true;
	else
		return false;
}

void DynIntQueue::clear()
{
	int value;

	while (!isEmpty())
		dequeue(value);
}