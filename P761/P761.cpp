// P761.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Inheritance.h"
#include<iostream>
const std::string dName[] = {
	"Archeology","Biology","Computer Science"
};
const std::string cName[] = {
	"Freshman","Sophomore","Junior","sSenior"
};
int main()
{
	Faculty prof;

	prof.setName("Indiana Jones");

	prof.setDepartment(ARCHEOLOGY);
	std::cout << "Professor " << prof.getName() <<" teaches in the " << "Department of ";

	Discipline dept = prof.getDepartmet();
	std::cout << dName[dept] << std::endl;

	return 0;
}

