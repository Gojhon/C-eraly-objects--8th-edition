// P196.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	const int A_SCORE = 90,
		B_SCORE = 80,
		C_SCORE = 70,
		D_SCORE = 60,
		MIN_SCORE = 0,
		MAX_SCORE = 100;

	int testscore;
	std::cout << "Enter Your numeric test score and I will" << std::endl;
	std::cin >> testscore;
	if (testscore >= MIN_SCORE&&testscore <= MAX_SCORE)
	{
		if (testscore >= A_SCORE)
			std::cout << "Your grade is A" << std::endl;
		else if(testscore >= B_SCORE)
			std::cout << "Your grade is B" << std::endl;
		else if (testscore >= C_SCORE)
			std::cout << "Your grade is C" << std::endl;
		else if (testscore >= D_SCORE)
			std::cout << "Your grade is D" << std::endl;
		else
			std::cout << "Your Grad is F" << std::endl;
	}
	else
	{
		std::cout << "That is an invalid score. Run the Program" << std::endl;
		std::cout << "again and enter a value in the range of" << std::endl;
		std::cout << MIN_SCORE<<" through "<<MAX_SCORE<< std::endl;
	}
    return 0;
}

