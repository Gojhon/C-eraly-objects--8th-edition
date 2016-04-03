#include<iostream>
#include"overload.h"

void NumberArray::operator=(const NumberArray &right)
{
	//�Լ� �����ε� ȣ���
	if (arraySize > 0) 
	{
		delete[] aPtr;
	}
	arraySize = right.arraySize;//right��ä�� ����� �ű��.
	aPtr = new double[arraySize]; //double�� ��ü�� apt�� ��´�.
	for (int index = 0; index < arraySize; index++)
	{
		aPtr[index] = right.aPtr[index];
		//right�� apt�� ���� apt�� �����Ѵ�.
	}
}
NumberArray::NumberArray(const NumberArray &obj)
{
	arraySize = obj.arraySize;
	aPtr = new double[arraySize];
	for (int index = 0; index < arraySize; index++)
		aPtr[index] = obj.aPtr[index];
}
NumberArray::NumberArray(int size1, double value)
{
	arraySize = size1;//��ü�� ����� �����.
	aPtr = new double[arraySize]; //��ü�� ũ�����
	setValue(value);
}
void NumberArray::setValue(double value)
{
	for (int index = 0; index < arraySize; index++)
		aPtr[index] = value; //aptr�� �Էµ� �Ű� ������ ���� arraysize��ŭ �Է��Ѵ�.
}

void NumberArray::print()const//ȣ���Ѵ�.
{
	for (int index = 0; index < arraySize; index++)
	{
		std::cout << aPtr[index] << " ";
	}
}

