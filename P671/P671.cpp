#include<iostream>
#include<string>

class Person
{
private:
	std::string name;
	int age;
public:
	Person(std::string name1, int age1);
	int getage() { return age; }
	std::string getName() { return name; }
};

Person::Person(std::string name1, int age1)
{
	name = name1;
	age = age1;
}

struct Rectangle
{
	int width, height;
};

int main()
{
	Rectangle *pRect;
	Person *pPerson;

	Rectangle rect;
	pRect = &rect;
	(*pRect).height = 12;
	pRect->width = 10;
	std::cout << "Area of the first rectangle is"
		<< pRect->width*pRect->height;

	pRect = new Rectangle;
	pRect->height = 6;
	pRect->width = 5;
	std::cout << std::endl << "Area of the second rectangle is " << pRect->width*pRect->height;

	pPerson = new Person("      E.Gonzalez", 23);
	std::cout << std::endl <<std::endl<< "The person's name is" << pPerson->getName();
	std::cout << std::endl << "The Person's age is " << pPerson->getage() << std::endl;

	return 0;
}
