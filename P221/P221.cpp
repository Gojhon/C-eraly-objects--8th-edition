// P221.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

enum Roster { Tom = 1, sharon, Bill, Teresa, Jhon };

int main()
{
	int who;

	std::cout << "This Program will give you a studen's birthday " << std::endl;
	std::cout << "Whose birthday do you want to Know " << std::endl;

	std::cout << "1=Tom" << std::endl;
	std::cout << "2=sharon" << std::endl;
	std::cout << "3=Bill" << std::endl;
	std::cout << "4=Teresa" << std::endl;
	std::cout << "5=Jhon" << std::endl;
	std::cin >> who;

	switch (who)
	{
	case Tom:std::cout << std::endl << "Tom's Birthday is January 3." << std::endl;
		break;
	case sharon :std::cout << std::endl << "Sharon's Birthday is April 22" << std::endl;
		break;
	case Bill : std::cout << std::endl << "Bill's birthday is December 19." << std::endl;
		break;
	case Teresa: std::cout << std::endl << "Teresa's birthday is February 2 ." << std::endl;
		break; 
	case Jhon: std::cout << std::endl << "Jhon's birthday is June 17." << std::endl;
		break;
	default: std::cout << std::endl << "Invalid selection " << std::endl;

		break;
	}

    return 0;
}

