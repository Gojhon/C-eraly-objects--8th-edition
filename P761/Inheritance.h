#pragma once
#include<string>

enum  Discipline
{
	ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE
};
enum Classification 
{
	FRESHMAN,SOPHOMORE,JUNIOR,SENIOR
};

class Person
{
private:
	std::string name;

public:
	Person() {
		setName("");
	}
	Person(std::string pname)
	{
		setName(pname);
	}
	void setName(std::string pName)
	{
		name = pName;
	}
	std::string getName()const
	{
		return name;
	}

};

class Student :public Person
{
private:
	Discipline major;
	Person *advisor;
public:
	void setMajor(Discipline d)
	{
		major = d;
	}
	Discipline getMajor()const {
		return major;
	}
	void setAdvisor(Person *p)
	{
		advisor = p;
	}
	Person *getAdvisor()const
	{
		return advisor;
	}
};

class  Faculty:public Person
{
private:
	Discipline department;
public:
	void setDepartment(Discipline d)
	{
		department = d;
	}
	Discipline getDepartmet()
	{
		return department;
	}
};

