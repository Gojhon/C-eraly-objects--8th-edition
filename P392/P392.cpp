// P392.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<Windows.h>

void PrintSpace(int n);

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	int color = 10;

	for (char letter = 'A'; letter <= 'Z'; letter += 2)
	{
		SetConsoleTextAttribute(screen, color);
		PrintSpace(letter - 'A');
		std::cout << letter << static_cast<char>(letter + 1) << std::endl;
		color += 2;
		if (color > 14)
			color = 10;

		Sleep(280);
	}
	SetConsoleTextAttribute(screen, 7);
    return 0;
}

void PrintSpace(int n)
{
	for (int space = 1; space <= n; space++)
		std::cout << " ";
}
