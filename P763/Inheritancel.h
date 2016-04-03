#pragma once
#include<string>

enum Discipline
{
	ARCHEOLOGY, BIOLOGY, COMPUER_SCIENCE
};
enum Classification
{
	Freshman,Sophomore,Junior,Senior
};

class Person
{
protected:
	std::string name;
public:
	Person() {
		setName("");
	}
	Person(std::string pName)
	{
		setName(pName);
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

class Student:public Person
{
private:
	Discipline major;
	Person *advisor;
public:
	Student(std::string sname, Discipline d, Person *adv);
	void setMajor(Discipline d)
	{
		major = d;
	}
	void setAdvisor(Person *p)
	{
		advisor = p;
	}
	Person *getAdvisor() const
	{
		return advisor;
	}

	
};
class Faculty :public Person
{
private:
	Discipline departement;
public:
	Faculty(std::string fname, Discipline d)
	{
		name = fname;
		departement = d;
	}
	void setDepartment(Discipline d)
	{
		departement = d;
	}
	Discipline getDepartment()const
	{
		return departement;
	}
};