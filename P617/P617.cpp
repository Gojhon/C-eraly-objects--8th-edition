// P617.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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
	//���� ���ø� ���� values 
	std::cout << "please enter " << SIZE << " i ntergers separated by spaces." << std::endl;
	//6���� ���� ������ �Է¹޴´�.
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> values[i]; //���� �Է� �޴´�.
	}
	std::cout << std::endl << "The unsorted values enterd are" << std::endl;
	displayVector(values); //���� �� ���� ǥ���Ѵ�. 

	sortVector(values); //�����Ѵ�.

	std::cout << "The sorted values are:" << std::endl;
	displayVector(values);//������ ���� ǥ���Ѵ�.

    return 0;
}


void displayVector(std::vector<int> numbers)//���� ǥ���Ѵ�.
{
	for (unsigned count = 0; count < numbers.size(); count++)
	{
		std::cout << numbers[count] << " ";//numbers ���� ǥ���Ѵ�.
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