// P230.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<cstdlib>
int main()
{
	std::string career1, career2, career3;

	int randomNum;

	unsigned seed = time_t(0);
	srand(seed);
	std::cout << "I am a fortune teller. Look into my crystal screen" << std::endl;
	std::cout << "and enter 3 careers you would like to hae. Example : " << std::endl;

	std::cout << "Career choice 1:";
	getline(std::cin, career1);
	std::cout << "Career choice 2:";
	getline(std::cin, career2);
	std::cout << "Career choice 3:";
	getline(std::cin, career3);

	randomNum = 1 + rand() % 4;

	if (randomNum == 1)
		std::cout << std::endl << "You will be a " << career1 << std::endl;
	else if (randomNum == 2)
		std::cout << std::endl << "You will be a " << career2 << std::endl;
	else if (randomNum == 3)
		std::cout << std::endl << "You will be a " << career3 << std::endl;
	else
		std::cout << "Sorry YOu will not be any of these." << std::endl;

    return 0;
}

