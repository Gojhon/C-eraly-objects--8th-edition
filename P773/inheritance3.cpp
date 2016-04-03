#include "inheritance3.h"

Student::Student(std::string snam, Discipine d, Person *adv)
	:Person(snam)
{
	major = d;
	advisor = adv;
}