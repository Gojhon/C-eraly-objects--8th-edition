// P866.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<string>
#include<cctype>

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

using namespace std;
struct Info
{
	char name[NAME_SIZE];
	int age;
	char address1[ADDR_SIZE];
	char address2[ADDR_SIZE];
	char phone[PHONE_SIZE];
};
int main()
{
	Info person;
	char response;
	
	std::string input;

	std::fstream people("people.dat", std::ios::out | std::ios::binary);

	if (!people)
	{
		std::cout << "Error opening file. Program aborting" << std::endl;
		return 0;
	}
	do
	{
		std::cout << "Enter person information : " << std::endl;
		std::cout << "Name: ";
		getline(std::cin, input);
		strcpy(person.name, input.c_str());
		std::cout << "Age: ";
		std::cin >> person.age;
		std::cin.ignore();
		std::cout << "Address line 1: ";
		getline(std::cin, input);
		strcpy(person.address1, input.c_str());
		std::cout << "Address line 2 : ";
		getline(std::cin, input);
		strcpy(person.address2, input.c_str());
		std::cout << "phone: ";
		std::getline(cin, input);
		strcpy(person.phone, input.c_str());
		people.write(reinterpret_cast<char*>(&person), sizeof(person));
		std::cout << "Do you want to enter another record? ";
		std::cin >> response;
		std::cin.ignore();
	} while (toupper(response) == 'Y');
	
	people.close();
    return 0;
}

