// P311.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include<Windows.h>

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	MessageBox(nullptr, L"DD", L"ff", MB_OK);

	for (int color = 0; color < 16; color++)
	{
		SetConsoleTextAttribute(screen, color);
		std::cout << "Merry Christmas" << std::endl;
		Sleep(400);
	}
	SetConsoleTextAttribute(screen, 7);

	CloseHandle(screen);
    return 0;
}

