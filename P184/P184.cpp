// P184.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	

	std::cout << "Answer the Followin Questions" << std::endl;
	std::cout << "with either Y For yes or N for No " << std::endl;
	std::cout << "Are you Employed" << std::endl;
	
	char employed, recentGrad;
	
	std::cin >> employed;
	std::cout << "Have You Graduted From College in the Past Two Years?";
	std::cin >> recentGrad;
	if(employed == 'Y')
	{
		if (recentGrad == 'Y')
			std::cout << "You Qualify FOr the Special interest rate." << std::endl;
		else
		{
			std::cout << "You Must Have Gralify For the Special Interest rate" << std::endl;
			std::cout << "Two years to qualify for the Special Interest rate" << std::endl;
		}
	}
	else
	{
		std::cout << "You must be employed to Qualify for the " << "Special Interest rate" << std::endl;
	}
    return 0;
}

