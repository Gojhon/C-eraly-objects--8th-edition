// P600.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
int binarySearch(const int[], int , int);

const int SIZE = 20;

int main()
{
	int IDnums[SIZE] = { 101,142,147,189,199,207,222,
		234,289,310,319,388,394,
		417,429,447,521,536,600 };

	int empID, results;

	std::cout << "Enter the employee Id you wish to search for : ";
	std::cin >> empID;

	results = binarySearch(IDnums, SIZE, empID);

	if (results == -1)
		std::cout << "That number does not exist in the array." << std::endl;
	else
		std::cout << "Id " << empID << "was found in element " << results << " of the array" << std::endl;
    
	return 0;
}


int binarySearch(const int array[], int size, int value)
{
	int first = 0,
		last = size - 1,
		middle,
		posiion = -1;
	bool found = false;

	while (!found&& first <= last)
	{
		middle = (first + last) / 2;
		if (array[middle] == value)
		{
			found = true;
			posiion = middle;
		}
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}

	return posiion;
}
