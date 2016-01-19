// P215.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	char feedGrade;

	std::cout << "Our dog food is available in three grades : " << std::endl;
	std::cout << "A,B, and C. Which do you want Pricing for?";
	std::cin >> feedGrade;

	switch (feedGrade)
	{
		case 'a':
		case 'A': std::cout << "30 Cents per Pound " << std::endl;
			break;
		case 'B':
		case 'b':std::cout << "20 Cents per Pound" << std::endl;
			break;
		case 'c':
		case 'C':std::cout << "20 Cents per Pound" << std::endl;
			break;
		default: std::cout << "That is an invalid choice " << std::endl;
	}
    return 0;
}

