// P214.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int modelNum;
	std::cout << "Our TVs come in three models: The 100,200, and 300." << std::endl;
	std::cout << "which do you want? ";
	std::cin >> modelNum;

	std::cout << std::endl << "That model hs the following Features: " << std::endl;

	switch (modelNum)
	{
	case 300: std::cout << " Built-in DVR" << std::endl;
	case 200: std::cout << " Built-in DVR" << std::endl;
	case 100: std::cout << " Built-in DVR" << std::endl;
		break;
	default:
		std::cout << "You can only choose the 100,200,or300 " << std::endl;

		break;
	}
    return 0;
}

