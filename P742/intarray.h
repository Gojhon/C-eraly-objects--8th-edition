#pragma once

#include<iostream>

class IntArray
{
private:
	int *aptr;
	int arraySize;
	void subError()const;
public :
	int* begin()
	{
		return aptr;
	}
	int* end()
	{
		return aptr+arraySize;
	}
	IntArray(int);
	IntArray(const IntArray &);
	~IntArray();
	int size()const { return arraySize; }
	int &operator[](int)const;
	int& test() { return aptr[2]; }
};