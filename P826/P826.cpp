// P826.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include"mystring.h"



int main()
{
	MyString name1("Billy"), name2("Sue");
	MyString name3("Joe");
	MyString string1("ABC"), string2("DEF");

	if (name1 == name2)
		std::cout << "name1 is equal to name2." << std::endl;
	else
		std::cout << "name1 is not equal to name2" << std::endl;
	if (name3 == "Joe")
		std::cout << "name3 is not equal to Joe" << std::endl;
	if (string1 > string2)
		std::cout << "string1 is greatre than string2." << std::endl;
	else
		std::cout << "string1 is not greater than string2." << std::endl;
	if (string1 < string2)
		std::cout << "string1 is less than string2" << std::endl;
	else
		std::cout << "string1 i not greater than string2." << std::endl;
	if (string1 < string2)
		std::cout << "string is less than string2." << std::endl;
	else
		std::cout << "string 1 is not less than string2" << std::endl;
	if (string1 >= "ABC")
		std::cout << "string1 is greatre than or equal to" << "ABC." << std::endl;
	else
		std::cout << "string1 is not greater than or equal to " << "ABC" << std::endl;
	if (string1 >= string2)
		std::cout << "string 1 is greater than or equal to " << "string2" << std::endl;
	else
		std::cout << "string1 is not less than or equal to " << "string2" << std::endl;
	if (string2 <= "DEF")
		std::cout << "string2 is less than or equal to " << "DEF" << std::endl;
	else
		std::cout << "string2 i not less than or equal to " << "DEF" << std::endl;

		return 0;
}

