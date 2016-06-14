// P46.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>


int main()
{
	int checking;
	unsigned int miles;
	long days;

	checking = -20;
	miles = 4276;
	days = 190000;

	std::cout << "We have made a long journey of " << miles << "miles.";
	std::cout << "\nOur checking account balance is " << checking;
	std::cout << "\nAbout " << days << "  days ago Columbes ";
	std::cout << "stood on this spot " << std::endl;

    return 0;
}

