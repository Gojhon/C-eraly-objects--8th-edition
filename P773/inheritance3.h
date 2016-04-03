#pragma once
#include<string>

enum Discipine {
	ARCHEOLOGY,BIOLOGY,COMPUTER_SCIENCE
};

enum Classification {
	FRESHMAN,SOPHOMORE,JUNIOR,SENIOR
};

class Person
{
protected:
	std::string name;
public:
	Person() { setName(""); }
	Person(std::string pName) { name = pName; }
	void setName(std::string pName) { name = pName; }
	std::string getName()const { return name; }
};

class Student :public Person
{
private:
	Discipine major;
	Person *advisor;
public:
	Student(std::string sname, Discipine d, Person *adv);

	void setMajor(Discipine d) { major = d; }
	Discipine getMajor()const { return major; }
	void setAdvisor(Person *p) { advisor = p; }
	Person *getAdvisor()const { return advisor; }
};

class Faculty :public Person
{
private:
	Discipine department;
public:
	Faculty(std::string fname, Discipine d) :Person(fname)
	{
		department = d;
	}
	void setDepartment(Discipine d) { department = d; }
	Discipine getDepartment()const { return department; }
};
class TFacilty :public Faculty
{
private:
	std::string title;
public :
	TFacilty(std::string fname, Discipine d, std::string title)
		:Faculty(fname, d)
	{
		setTitle(title);
	}
	void setTitle(std::string title)
	{
		this->title = title;
	}
	std::string getName()const { return title + " " + name; }

};