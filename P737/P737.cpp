// P737.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"Length.h"
#include<iostream>

int main()
{
	Length first(0), second(1, 9), c(0); //Length 클래스 객체를 생성

	std::cout << "Demonstreating prefix ++ operator and output operator." << std::endl;
	for (int count = 0; count < 4; count++)
	{
		//operator++()호출
		first = ++second; 
		std::cout << "First: " << first << " .Second : " << second << std::endl;
		//operator<< 호출
		//out << a.getFeet() << " feet, " << a.getInches() << " inches";
	}

	std::cout << std::endl << "Demonstrating postfix ++ operator and output operator." << std::endl;

	for (int count = 0; count < 4; count++)
	{  //operator++(int) 함수 호출
		first = second++;
		//operator++(int) 함수 호출
		std::cout << "First : " << first << ". Second: " << second <<"."<< std::endl;
	}
	std::cout << std::endl << "Demonstrating input and output operators " << std::endl;
	std::cin >> c;
	//operator>> 함수호출
	/*
	int feet, inches;
	std::cout << "Enter feet: ";
	in >> feet;
	std::cout << "Enter inches: ";
	in >> inches;
	*/
	std::cout << "You entered " << c << "." << std::endl;

    return 0;
}

