// P127.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int size = 12;
	char name1[size], name2[size];

	strcpy(name1, "Sebastian");
	std::cout << "name1 now holds the String" << name1 << std::endl;

	strcpy(name2, name1);
	std::cout << "name2 now holds the String" << name2 << std::endl;


    return 0;
}

