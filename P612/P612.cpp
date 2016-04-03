// P612.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

void selectionSort(int[], int); //��������
void showArray(const int[], int); //���� ǥ��

int main()
{
	const int SIZE = 6;
	//
	int values[SIZE] = { 5,7,2,8,9,1 };
	//int �� �迭�� ����� 6���� ���� �־��ش�.

	std::cout << "The unsorted values are" << std::endl;
	showArray(values, SIZE); //���� ǥ�� : ���� �� ���� �����ش�.

	std::cout << "���� ��ȯ ����" << std::endl;
	selectionSort(values, SIZE); //�������� ȣ��
	
	std::cout << "The soreted values are" << std::endl;
	showArray(values, SIZE);//���� ǥ�� : ���� �� ���� �����ش�.
	return 0;
}

void selectionSort(int array[], int size)//decay������ array ������� ���� ���� ��������
{
	int startScan, minIndex, minValue;
	// int �� ���� 3���� �����Ѵ�.
	for (startScan = 0; startScan < (size - 1); startScan++)
	{	//{ 5,7,2,8,9,1 };
		//startSacn=0.1,2,3,4
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{   //index=1,2,3,4,5
			if(array[index]<minValue)
			{ 
			minValue = array[index]; //���� ���� minvalue�� �־��ش�.
			minIndex = index; //�迭�� ������ �����Ѵ�.
			}
		}
		showArray(array, size);
		array[minIndex] = array[startScan];//��ġ�� �������ش�.
		array[startScan] = minValue; //���� ���� �迭 ������� ���� �־��ش�.
	}

}
void showArray(const int array[], int size) //���ĵ� ���� ǥ���Ѵ�.
{
	for (int count = 0; count < size; count++) //�迭 0���� 5���� ����Ѵ�.
		std::cout << array[count] << " ";
	std::cout << std::endl;
}