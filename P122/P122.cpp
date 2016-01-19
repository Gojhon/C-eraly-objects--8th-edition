// P122.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	char ch;
	std::cout << "This Program has Paused. Press Enter to Continue";
	std::cin.get(ch);
	std::cout << "It has Paused a second time. Please Press Enter Again";
	ch = std::cin.get();
	std::cout << "It has Paused a third time. Please Press Enter again";
	std::cin.get();
	std::cout << "Thank you!";

    return 0;
}

