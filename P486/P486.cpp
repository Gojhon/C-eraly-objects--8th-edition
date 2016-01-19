// P486.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<Windows.h>

void placeCursor(HANDLE, int, int);
void printStars(int);

int main()
{
	const int midRow = 12, midCol = 40, numBpxes = 3;
	int width, startRow, endRow;
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int box = 1, height = 1; box <= numBpxes; box++, height += 2)
	{
		startRow = midRow - box;
		endRow = midRow + box;
		width = box * 5 + (box + 1) % 2;
		placeCursor(screen, startRow,midCol - width / 2);
		printStars(width);

		for (int sideROw = 1; sideROw <= height; sideROw++)
		{
			placeCursor(screen, startRow + sideROw, midCol - width / 2);
			std::cout << "*" << std::endl;
			placeCursor(screen, startRow + sideROw, midCol + width / 2);
			std::cout << "*" << std::endl;
		}
		placeCursor(screen, endRow, midCol - width / 2);

		printStars(width);
		Sleep(750);

	}
	placeCursor(screen, 20, 0);

    return 0;
}

void placeCursor(HANDLE screen, int row, int col)
{
	COORD position;
	position.Y = row;
	position.X = col;
	SetConsoleCursorPosition(screen, position);
}

void printStars(int numStars)
{
	for (int star = 1; star <= numStars; star++)
	{
		std::cout << '*';
	}
	std::cout << std::endl;
}