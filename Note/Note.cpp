// Note.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main(void)
{
	int number = 1;
	while (number <= 5)
	{
		std::cout << "Hello World" << std::endl;
		number=number+1;
	}
	return 0;
}