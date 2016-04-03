// P773.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include"inheritance3.h"

const std::string dName[] =
{
	"Archeology","Biology","Computer Science"
};
const std::string cName[] =
{
	"Freshman","Sophomore","Junior","Senior"
};

int main()
{
	TFacilty prof("Indiana Jones", ARCHEOLOGY, "Dr.");
	Student st("Sean Bolster", ARCHEOLOGY, &prof);

	std::cout << prof.getName() << " teaches "
		<< dName[prof.getDepartment()] << "." << std::endl;
	Person *pAdvisor = st.getAdvisor();
	std::cout << st.getName() << "\'s advisor is "
		<< pAdvisor->getName() << ".";

	return 0;
}

