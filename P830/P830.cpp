// P830.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	extern char**environ;
	int k = 0;
	while (environ[k] != 0)
	{
		std::cout << environ[k] << std::endl;
		k++;
	}

    return 0;
}

