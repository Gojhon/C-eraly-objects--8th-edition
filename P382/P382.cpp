// P382.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

void someFunction();

int main()
{
	someFunction();
    return 0;
}


void someFunction()
{
	std::cout << "This Program Terminates with the Exit Function" << std::endl;
	std::cout << "Bye !" << std::endl;
	exit(0);

	std::cout << "This message will never be displayed" << std::endl;
	std::cout << "because the Program has already terminated" << std::endl;

	std::cout << "This Message will never be displayed " << std::endl;
	std::cout << "because the Program has already termiated" << std::endl;


}

