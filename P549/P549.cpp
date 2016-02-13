// P549.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>

const int NUM_COLS = 4;
const int TBL1_ROWS = 3;
const int TBL2_ROWS = 4;

void showArray(const int[][NUM_COLS], int);
int main()
{
	int table1[TBL1_ROWS][NUM_COLS] = { {1,2,3,4} ,{5,6,7,8} ,{9,10,11,12} };
	int table2[TBL2_ROWS][NUM_COLS] = { {10,20,30,40},{50,60,70,80},{90,100,110,120},{130,140,150,160} };

	std::cout << "The contents of Table are: " << std::endl;
	showArray(table1, TBL1_ROWS);
	std::cout << "The contents of Table2 are: " << std::endl;
	showArray(table2, TBL2_ROWS);

    return 0;
}
void showArray(const int array[][NUM_COLS], int numRows)
{
	for (int row = 0; row < numRows; row++)
	{
		for (int col = 0; col < NUM_COLS; col++)
		{
			std::cout << std::setw(5) << array[row][col] << " ";
		}
		std::cout << std::endl;
	}
}

