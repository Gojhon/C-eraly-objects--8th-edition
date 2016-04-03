#pragma once
#include<iostream>

class IntClass
{
private:
	int value;
public :
	IntClass(int intvalue)
	{
		value = intvalue;
	}
	int getValue()const { return value; }
};