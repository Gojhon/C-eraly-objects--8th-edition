// P885.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "serizalizaition.h"

#define menu false;

#if menu==true

int main()
{
	Person people[] =
	{
		Person("Joseph",'X',"Puff",32),
		Person("Louise",'Y',"Me",28)
	};

	std::ofstream outFIle("MorePeople.dat", std::ios::binary);
	if (!outFIle)
	{
		std::cout << "The output file cannot be opened";
		exit(1);
	}
	people[0].store(outFIle);
	people[1].store(outFIle);
	std::cout << "Data has been written to the file" << "Morepeople.dat";

	outFIle.close();

    return 0;
}

#else
int main()
{

	const int NUM_PEOPLE = 2;
	Person People[NUM_PEOPLE];

	std::ifstream infile("MorePeople.dat", std::ios::binary);
	if (!infile)
	{
		std::cout << "The input file cannot be opened";
		exit(1);
	}
	for (int k = 0; k < NUM_PEOPLE; k++)
	{
		People[k].load(infile);
	}
	for (int k = 0; k < NUM_PEOPLE; k++)
	{
		People[k].display();
	}
	infile.close();
	return 0;
}


#endif
