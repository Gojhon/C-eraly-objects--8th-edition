// P617.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<vector>

void displayVector(std::vector<int>);
void sortVector(std::vector <int> &);

int main()
{
	const int SIZE = 6;
	std::vector<int > values(SIZE);
	//백터 탬플릿 변수 values 
	std::cout << "please enter " << SIZE << " i ntergers separated by spaces." << std::endl;
	//6개의 백터 변수를 입력받는다.
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> values[i]; //값을 입력 받는다.
	}
	std::cout << std::endl << "The unsorted values enterd are" << std::endl;
	displayVector(values); //변경 전 값을 표출한다. 

	sortVector(values); //정렬한다.

	std::cout << "The sorted values are:" << std::endl;
	displayVector(values);//변경후 값을 표출한다.

    return 0;
}


void displayVector(std::vector<int> numbers)//값을 표출한다.
{
	for (unsigned count = 0; count < numbers.size(); count++)
	{
		std::cout << numbers[count] << " ";//numbers 값을 표출한다.
	}
	std::cout << std::endl;

}
void sortVector(std::vector <int> &numbers)
{
	int temp; //
	bool swap;

	do
	{
		swap = false;
		for (unsigned count = 0; count < numbers.size() - 1; count++)
		{	//count
			if (numbers[count] > numbers[count + 1])
			{
				temp = numbers[count];
				numbers[count] = numbers[count + 1];
				numbers[count + 1] = temp;
				swap = true;
			}
		}
		displayVector(numbers);
	} while (swap);
}