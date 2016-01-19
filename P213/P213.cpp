// P213.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int modeNum;
	std::cout << "Our TVs come in three modeles: te 100,200, and 300" << std::endl;
	std::cin >> modeNum;

	std::cout << "That model has the following features : " << std::endl;

	switch (modeNum)
	{
	case 300: std::cout << " Built-in DVR"<<std::endl;
	case 200: std::cout << " 1080p high definition picture "<< std::endl;
	case 100: std::cout << " 42\" \ LCD flat screen "<< std::endl;
		break;
	default: std::cout << " You can only choose the 100,200,or 300 " << std::endl;
		break;
	}
    return 0;
}

