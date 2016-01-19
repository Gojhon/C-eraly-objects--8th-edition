// P60.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	std::string month = "February";
	int year, days = 28;
	year = 2015;

	std::cout << "In " << year << " " << month << " had" << days << "days.\n";

    return 0;
}

