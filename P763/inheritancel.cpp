#include "Inheritancel.h"

Student::Student(std::string sname, Discipline d, Person *adv)
{
	name = sname;
	major = d;
	advisor = adv;
}