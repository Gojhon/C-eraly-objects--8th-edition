// P867.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

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

	std::fstream people("people.dat", std::ios::in | std::ios::binary);
	if (!people)
	{
		std::cout << "Error oepning file. Program aborting. " << std::endl;
		return 0;
	}

	std::cout << "Here are the Pe ople file.Program aborting" << std::endl;

	people.read(reinterpret_cast<char *>(&person), sizeof(person));

	while (!people.eof())
	{
		std::cout << "Name: ";
		std::cout << person.name << std::endl;
		std::cout << "Age:";
		std::cout << person.age << std::endl;
		std::cout << "Address line 1 : ";
		std::cout << person.address1 << std::endl;
		std::cout << "Address line 2 : ";
		std::cout << person.address2 << std::endl;
		std::cout << "Phone: ";
		std::cout << person.phone << std::endl;
		std::cout << std::endl << "Strike any key to see the next record" << std::endl;
		std::cin.get(response);
		people.read(reinterpret_cast<char *>(&person), sizeof(person));
	}
	std::cout << "That's all the information in the file " << std::endl;
	people.close();
    return 0;
}

