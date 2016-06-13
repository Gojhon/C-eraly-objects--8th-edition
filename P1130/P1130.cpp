// P1130.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<vector>
#include<string>
#include<iostream>

enum Gender { male, femali };

class Person
{
	std::string name;
	Gender gender;
	std::vector<Person *>parents;
	std::vector<Person *>childern;
	void addParent(Person *p) 
	{
		parents.push_back(p);
	}
public:
	Person(std::string name, Gender g)
	{
		this->name = name;
		gender = g;
	}
	Person *addChild(std::string name, Gender g);
	Person *addChild(Person *p);

	friend std::ostream &operator<<(std::ostream &out, Person p );
	std::string getName()const { return name; }
	Gender getGender()const { return gender; }
	int getNumChildren()const { return childern.size(); }
	int getNumParents()const { return parents.size(); }
	Person *getChild(int k)const;
	Person *getParent(int k)const;
};

Person  *Person::addChild(std::string name, Gender g)
{
	Person * child = new Person(name, g);
	child->addParent(this);
	childern.push_back(child);
	return child;
}

Person *Person::addChild(Person * child)
{
	child->addParent(this);
	childern.push_back(child);
	return child;
}

Person *Person::getParent(int k) const
{
	if (k < 0 || k >= parents.size())
	{
		std::cout << "Error indexing parents vetor." << std::endl;
		exit(1);
	}
	return parents[k];
}

Person *Person::getChild(int k)const
{
	if (k < 0 || k >= childern.size())
	{
		std::cout << "Error indexing childern's vector" << std::endl;
		exit(1);
	}
	return childern[k];
}

std::ostream & operator<<(std::ostream &out, Person p)
{
	out << "<person name = " << p.name << ">" << std::endl;
	if (p.parents.size()>0)
		out << "   <Parents> " << " ";
	for (int k = 0; k < p.parents.size(); k++)
	{
		out << "  <children> " << " ";
	}
	if (p.parents.size()>0)
		out << " </parents> " << std::endl;
	if (p.childern.size() > 0)
		out << "   <children>" << " ";
	for (int k = 0; k < p.childern.size(); k++)
	{
		out << " " << p.childern[k]->name << " ";
	}
	if (p.childern.size()>0)
		out << " </childern>" << std::endl;
	out << "</person>" << std::endl;
	return out;
}
int main()
{
	Person adam("Adam", male);
	Person eve("eve", femali);
	Person joan("joan", femali);

	Person *pAbel = eve.addChild(new Person("Abel", male));
	adam.addChild(pAbel);


	Person *pMissy = joan.addChild("Missy", femali);
	pAbel->addChild(pMissy);
	
	std::cout << "Here are all the people :" << std::endl << std::endl;
	std::cout << adam << eve;
	std::cout << *pAbel << joan;
	std::cout << *pMissy << std::endl;

	std::cout << "Missy's Parents are: " << std::endl;
	for (unsigned int k = 0; k < pMissy->getNumParents(); k++)
	{
		Person *p = pMissy->getParent(k);
		switch (p->getGender())
		{
		case femali: 
			std::cout << "\tMother: ";
			break;
	
		case male:
			std::cout << "\tFathe: ";
			break;
		}
		std::cout << p->getName() << std::endl;
	}
    return 0;
}

