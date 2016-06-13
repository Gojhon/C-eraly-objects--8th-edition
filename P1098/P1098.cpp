// P1098.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<stack>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<string>


void qSort(int a[], int size);
void outputArray(const int a[], int size);
int partition(int a[], int, int);

class Range 
{
private:
	friend void qSort(int a[], int);
	int start;
	int end;
public:
	Range(int s, int e)
	{
		start = s;
		end = e;
	}
};

const int MAX = 100;

int main()
{
	std::ifstream inputFile;
	std::string filename = "sort.dat";
	int array[MAX];
	int size;
	inputFile.open(filename.data());

	if (!inputFile)
	{
		std::cout << "The file " << filename << " Cannot be " << "opened .";
		exit(1);
	}
	size = 0;
	while (inputFile >> array[size])
	{
		size++;
		if (size == MAX)
			break;
	}

	std::cout << "The original array is : " << std::endl;
	outputArray(array, size);

	qSort(array, size);
	std::cout << "The sorted array is : " << std::endl;
	outputArray(array, size);


	return 0;
}

void qSort(int arr[], int size)
{
	std::stack<Range> qStack;
	int pivot, start, end;

	qStack.push(Range(0, size-1));

	while (!qStack.empty())
	{
		Range currentRage = qStack.top();
		qStack.pop();
		start = currentRage.start;
		end = currentRage.end;
		if (start < end)
		{
			pivot = partition(arr, start, end);
			qStack.push(Range(start, pivot - 1));
			qStack.push(Range(pivot + 1, end));

		}
	}
}

int partition(int arr[], int start, int end)
{

	int pivotValue = arr[start];
	int pivotPositon = start;

	for (int pos = start + 1; pos <= end; pos++)
	{
		if (arr[pos] < pivotValue)
		{
			std::swap(arr[pivotPositon + 1], arr[pos]);
			std::swap(arr[pivotPositon ], arr[pivotPositon+1]);
			pivotPositon++;
		}
	}
	return pivotPositon;

}

void outputArray(const int arr[], int size)
{
	for (int k = 0; k < size; k++)
		std::cout << arr[k] << " ";
	std::cout << std::endl;
}