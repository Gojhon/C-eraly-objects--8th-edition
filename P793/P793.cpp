// P793.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int NAME_LENGTH = 50;
	//상수형 int  NAME_LENGTH에 50을 할당한다.
	char *pname;
	//포인터를 생성한다.
	pname = new char[NAME_LENGTH];// pname에 char변수를 50개를 할당한다.
	std::cout << "Enter your name:";
	std::cin.getline(pname, NAME_LENGTH); 
	//bufferSize NAME_LENGTH만큼 키보드에 입력받고 pname에할당한다.
	std::cout << "Hello " << pname;
	//Hello pname출력
    return 0;
}

