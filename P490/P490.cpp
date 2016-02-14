// P490.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<Windows.h>
 

int main()
{
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { 40, 3 };
	SetConsoleCursorPosition(screen, pos);
	std::cout << "0" << std::endl;
	Sleep(500);

	for (int tossIt = 1; tossIt <= 3; tossIt++)
	{
		while (pos.Y <= 20)
		{
			SetConsoleCursorPosition(screen, pos);
			std::cout << "|" << std::endl;
			pos.Y++;
			SetConsoleCursorPosition(screen, pos);
			std::cout << "0" << std::endl;
			Sleep(100);
		}

		while (pos.Y > 3)
		{
			SetConsoleCursorPosition(screen, pos);
			std::cout << " " << std::endl;
			pos.Y--;
			SetConsoleCursorPosition(screen, pos);
			std::cout << "0" << std::endl;
			Sleep(100);
		}
	}


    return 0;
}

