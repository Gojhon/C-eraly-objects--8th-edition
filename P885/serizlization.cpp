#include "serizalizaition.h"

Person::Person(std::string fname, char mi, std::string lanme, int age)
{
	this->fname = fname;
	this->lname = lanme;
	this->mi = mi;
	this->age = age;
}

void Person::store(std::ofstream &outFile)
{
	outFile.write(&mi, sizeof(mi));
	outFile.write(reinterpret_cast<char *>(&age), sizeof(age));

	int firstNameLength = fname.length();
	outFile.write(fname.data(), firstNameLength);
	int lastNameLength = lname.length();
	outFile.write(reinterpret_cast<char *>(&lastNameLength), sizeof(int));
	outFile.write(lname.data(), lastNameLength); 

}

void Person::load(std::ifstream &inFIle)
{
	const int BUFFER_SIZE = 256;
	static char buffer[256];

	inFIle.read(&mi, sizeof(mi));
	inFIle.read(reinterpret_cast<char *>(&age), sizeof(age));

	int firstNameLength;
	
	inFIle.read(reinterpret_cast<char *>(&firstNameLength), sizeof(int));
	inFIle.read(buffer, firstNameLength);

	buffer[firstNameLength] = '\0';
	fname = buffer;

	int lastNameLength;
	inFIle.read(reinterpret_cast<char *>(&lastNameLength),
sizeof(int));
	
	inFIle.read(buffer, lastNameLength);
	buffer[lastNameLength] = '\0';
	lname = buffer;

}


