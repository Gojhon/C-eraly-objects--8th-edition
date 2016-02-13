// P488.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<Windows.h>
#include<string>

struct UserInfo
{
	std::string name;
	int age;
	char gender;
};

void placeCursor(HANDLE, int, int);
void displayPrompts(HANDLE);
void getUserInput(HANDLE, UserInfo&);
void displayData(HANDLE, UserInfo);

int main()
{
	UserInfo input;
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	displayPrompts(screen);
	getUserInput(screen, input);
	displayData(screen, input);

    return 0;
}

void placeCursor(HANDLE screen, int row , int col)
{
	COORD position;
	position.X = row;
	position.Y = col;
	SetConsoleCursorPosition(screen, position);
}

void displayPrompts(HANDLE screen)
{
	placeCursor(screen, 3, 25);
	std::cout << "******* Data Entry Form *******"<< std::endl;
	placeCursor(screen, 5, 25);
	std::cout << "    " << std::endl;
	placeCursor(screen, 7, 25);
	std::cout << "           Gender(M/f): " << std::endl;
}

void getUserInput(HANDLE screen, UserInfo &input)
{
	placeCursor(screen, 5, 31);
	std::getline(std::cin, input.name);
	placeCursor(screen, 7, 30);
	std::cin >> input.age;
	placeCursor(screen, 7, 55);
	std::cin >> input.gender;
}

void displayData(HANDLE screen, UserInfo input)
{
	placeCursor(screen, 10, 0);
	std::cout << "Here is the data you entered " << std::endl;
	std::cout << "Name    : " << input.name << std::endl;
	std::cout << "Age     : " << input.age << std::endl;
	std::cout << "Gender  : " << input.gender << std::endl;

}
