// P737.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include"Length.h"
#include<iostream>

int main()
{
	Length first(0), second(1, 9), c(0); //Length Ŭ���� ��ü�� ����

	std::cout << "Demonstreating prefix ++ operator and output operator." << std::endl;
	for (int count = 0; count < 4; count++)
	{
		//operator++()ȣ��
		first = ++second; 
		std::cout << "First: " << first << " .Second : " << second << std::endl;
		//operator<< ȣ��
		//out << a.getFeet() << " feet, " << a.getInches() << " inches";
	}

	std::cout << std::endl << "Demonstrating postfix ++ operator and output operator." << std::endl;

	for (int count = 0; count < 4; count++)
	{  //operator++(int) �Լ� ȣ��
		first = second++;
		//operator++(int) �Լ� ȣ��
		std::cout << "First : " << first << ". Second: " << second <<"."<< std::endl;
	}
	std::cout << std::endl << "Demonstrating input and output operators " << std::endl;
	std::cin >> c;
	//operator>> �Լ�ȣ��
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

