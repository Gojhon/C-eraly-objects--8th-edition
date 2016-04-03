#pragma once
#include<iostream>

class NumberArray
{
private:
	double *aPtr;
	int arraySIze;
public:
	NumberArray(NumberArray &);
	NumberArray(int size, double value);
	NumberArray()
	{
		if (arraySIze > 0)
			delete[] aPtr;
	}
	void print()const;
	void setValue(double value);

};