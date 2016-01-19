// P311.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

