// P312.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include<Windows.h>
int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	int color = 10;
	for (char letter = 'A'; letter <= 'z'; letter++)
	{
		SetConsoleTextAttribute(screen, color);
		std::cout << letter << "  " << std::endl;

		color += 2;
		if (color > 25)
			color = 10;

		Sleep(280);
	}
	SetConsoleTextAttribute(screen, 7);
    return 0;
}

