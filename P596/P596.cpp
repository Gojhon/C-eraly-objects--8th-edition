// P596.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int searchList(const int [], int, int);
const int SIZE = 5;

int main()
{
	int tests[SIZE] = { 87,75,98,100,82 };
	int results;

	results = searchList(tests, SIZE, 100);

	if (results == -1)
		std::cout << "You did not earn 100 Points on any test" << std::endl;
	else
	{
		std::cout << "You earned 100 Points on test";
		std::cout << (results + 1) << std::endl;
	}
	return 0;
}

int searchList(const int List[], int Size, int Value)
{
	int index = 0;
	int position = -1;
	bool found = false;

	while (index < Size && !found)
	{
		if (List[index] == Value)
		{
			found = true;
			position = index;
		}
		index++;
	}
	return position;
}