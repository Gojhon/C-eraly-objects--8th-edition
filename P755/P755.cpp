// P755.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>

class Date
{
private:
	std::string month;
	int day, year;
	int personID;
public:
	Date(std::string m, int d, int y, int id);
	~Date();
};
Date::Date(std::string m, int d, int y, int id) :month(m),day(d),year(y),personID(id)
{
	std::cout << "Date-Of-Birth object for Person " << personID << " has been created." << std::endl;
}
Date::~Date()
{
	std::cout << "Date-Of-Birth object for person" << personID << " has been destroyed." << std::endl;
}

class Country
{
private:
	std::string name;
public:
	Country(std::string name);
	~Country();

};
Country::Country(std::string name) :name(name)
{
	std::cout << "A Country object has been Created" << std::endl;
}
Country::~Country()
{
	std::cout << "A country object has been destroyed " << std::endl;
}

class Person
{
	std::string name;
	Date dateOfBirth;
	int personID;
	Country *pCountry;
public:
	Person(std::string name, std::string month, int day, int year, Country*pC);
	~Person();
	static int uniquePersonID;
};

Person::Person(std::string name, std::string month, int day, int year, Country*pC) :
	name(name), dateOfBirth(month, day, year, Person::uniquePersonID), personID(Person::uniquePersonID), pCountry(pC)
{
	std::cout << "Person object " << personID << " has been Created" << std::endl;
	Person::uniquePersonID++;
}
Person::~Person()
{
	std::cout << "Person object " << personID << " has been destroyed " << std::endl;
}

int Person::uniquePersonID = 1;

int main()
{
	Country usa("USA");

	Person *p = new Person("Peter Lee", "January", 1, 1985, &usa);
	Person p1("Eva Gustafson", "May", 15, 1992, &usa);
	std::cout << "Now there are two People" << std::endl;
	delete p;
	std::cout << "Now there is only one" << std::endl;

    return 0;
}

