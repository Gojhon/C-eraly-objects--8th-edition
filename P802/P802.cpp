// P802.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<cstring>

int main()
{
	const int N_ITEMS = 5,
			  S_LENGTH = 31;
	char prods[N_ITEMS][S_LENGTH] = {"TV327 31 inch Telvision",
									 "CD257 CD Player",
									 "TA677 Answering Machine",
									 "CS109 Car Stereo",
									 "PC955 Personal Computer" };

	char lookUp[S_LENGTH];
	char *strPtr=NULL;
	std::cout << "\tProduct Database" << std::endl << std::endl;
	std::cout << "Enter a Product number to search for: " << std::endl;
	std::cin.getline(lookUp, S_LENGTH);

	int index = 0;
	while (index < N_ITEMS)
	{
		strPtr = strstr(prods[index], lookUp);
		if (strPtr != NULL)
			break;
		index++;
	}
	if (strPtr == NULL)
	{
		std::cout << "No matching Product was found" << std::endl;
	}
	else
		std::cout << prods[index] << std::endl;

    return 0;
}

