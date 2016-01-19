// P394.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<Windows.h>

void displayMenu();
int getchoice();
void makeJackOlantern();

const int QUit = 6, MAX_CHOICE = 6;
int main()
{
	INT colorChoice;
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	do {
		SetConsoleTextAttribute(screen, 7);
		displayMenu();
		colorChoice = getchoice();
		if (colorChoice != QUit)
		{
			SetConsoleTextAttribute(screen,colorChoice+9);
			makeJackOlantern();
		}
	} while (colorChoice != QUit);

    return 0;
}

void displayMenu()
{
	system("cls");
	std::cout << "will draw a jack-0-lantern. wha color should it be?" << std::endl << std::endl
		<< "    1 for Green   2 for Blue    3 for Red" << std::endl
		<< "    4 for Purple  5 for Yellow  6 To quit" << std::endl;
}
int getchoice()
{
	int choice;
	std::cin >> choice;
	while (choice<1 || choice>MAX_CHOICE)
	{
		std::cout << std::endl << "The Only valid choice are 1-" << MAX_CHOICE << ". Please re-enter";
		std::cin >> choice;
	}
	return choice;
}
void makeJackOlantern()
{

	std::cout<< std::endl << std::endl;
	std::cout << "                                ^   ^" << std::endl;
	std::cout << "                                  .  " << std::endl;
	std::cout << "                               ||___/  " << std::endl;
	std::cout << std::endl << std::endl << "Press Enter To return to the menu";
	std::cin.get();
	std::cin.get();
}