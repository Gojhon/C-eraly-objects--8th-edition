#include<iostream>
#include"NumberArray2.h"

NumberArray::NumberArray(NumberArray &obj)
{
	arraySIze = obj.arraySIze;
	aPtr = new double[arraySIze];
	for (int index = 0; index < arraySIze; index++)
		aPtr[index] = obj.aPtr[index];
}

NumberArray::NumberArray(int size, double value)
{
	arraySIze = size;
	aPtr = new double[arraySIze];
	setValue(value);
}

void NumberArray::setValue(double value)
{
	for (int index = 0; index < arraySIze; index++)
		aPtr[index] = value;
}

void NumberArray::print()const
{
	for (int index = 0; index < arraySIze; index++)
		std::cout << aPtr[index] << " ";
}
