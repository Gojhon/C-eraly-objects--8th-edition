// P827.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>

std::string dollarFormat(std::string);

int main()
{
	std::string input;
	std::cout << "Enter a dollar amount in the form nnnnn.nn : ";
	std::cin >> input;
	std::cout << "Formatted amout :     " << dollarFormat(input) << std::endl;

    return 0;
}
std::string dollarFormat(std::string original)
{
	std::string formatted = original;
	int dp = formatted.find(".");
	int pos = dp;
	while (pos > 3)
	{
		pos = pos - 3;
		formatted.insert(pos,",");
	}
	formatted.insert(0, "$");
	return formatted;
}
