// P382.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

