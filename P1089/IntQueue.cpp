#include "IntQueue.h"
#include<iostream>


IntQueue::IntQueue(int s)
{
	queueArray = new int[s];
	queueSize = s;
	front = -1;
	rear = -1;
	numItems = 0;
}


IntQueue::IntQueue()
{
	delete[] queueArray;
}

void IntQueue::enqueue(int num)
{
	if (isFull())
	{
		std::cout << "The queue is full." << std::endl;
		exit(1);
	}
	else
	{
		rear = (rear + 1) % queueSize;
		queueArray[rear] = num;
		numItems++;
	}
}

void IntQueue::dequeue(int &num)
{
	if (isEmpty())
	{
		std::cout << "The queue is empty." << std::endl;
		exit(1);
	}
	else
	{
		front = (front + 1) % queueSize;
		num = queueArray[front];
		numItems--;
	}
}

bool IntQueue::isEmpty()const
{
	if (numItems > 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool IntQueue::isFull()const
{
	if (numItems < queueSize)
		return false;
	else
		return true;
}

void IntQueue::clear()
{
	front = -1;
	rear= - 1;
	numItems = 0;
}