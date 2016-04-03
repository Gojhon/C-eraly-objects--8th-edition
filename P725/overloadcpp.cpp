#include<iostream>
#include"overload.h"

void NumberArray::operator=(const NumberArray &right)
{
	//함수 오버로딩 호출시
	if (arraySize > 0) 
	{
		delete[] aPtr;
	}
	arraySize = right.arraySize;//right객채의 사이즈를 옮긴다.
	aPtr = new double[arraySize]; //double형 객체를 apt에 담는다.
	for (int index = 0; index < arraySize; index++)
	{
		aPtr[index] = right.aPtr[index];
		//right의 apt의 값을 apt에 대입한다.
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
	arraySize = size1;//객체의 사이즈를 만든다.
	aPtr = new double[arraySize]; //객체의 크기생성
	setValue(value);
}
void NumberArray::setValue(double value)
{
	for (int index = 0; index < arraySize; index++)
		aPtr[index] = value; //aptr에 입력된 매개 변수의 값을 arraysize만큼 입력한다.
}

void NumberArray::print()const//호출한다.
{
	for (int index = 0; index < arraySize; index++)
	{
		std::cout << aPtr[index] << " ";
	}
}

