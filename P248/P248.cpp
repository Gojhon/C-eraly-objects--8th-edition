// P248.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include<fstream>
int main()
{
	const int MIN_A_SCORE90 = 90,
		MIN_B_SCORE80 = 80,
		MIN_C_SCORE70 = 70,
		MIN_D_SCORE60 = 60,
		MIN_POSSIBLE_SCORE = 0;

	int numStudents, student, testScore;
	char grade;
	bool GoodScore = true;

	std::cin >> numStudents;
	student = 1;
	while (student<= numStudents)
	{
		std::cout << std::endl << "Enter the numric test score for student #" << student << ": ", std::cin >> testScore;
		if (testScore >= MIN_A_SCORE90)
			grade = ' A';
		else if (testScore >= MIN_B_SCORE80)
			grade = ' B';
		else if (testScore >= MIN_C_SCORE70)
			grade = ' C';
		else if (testScore >= MIN_D_SCORE60)
			grade = ' D';
		else if (testScore >= MIN_POSSIBLE_SCORE)
			grade = ' F';
		else
			GoodScore = false;

		if (GoodScore)
			std::cout << "The letter Grade is" << grade << std::endl;
		else
			std::cout << "The Score cannot be below zero" << std::endl;

		student = student + 1;
	}

    return 0;
}

