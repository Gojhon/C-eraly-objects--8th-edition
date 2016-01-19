// P179.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

using namespace std;
int main()
{
	const int MIN_A_SCORE = 90,
		MIN_B_SCORE = 80,
		MIN_C_SCORE = 70,
		MIN_D_SCORE = 60,
		MIN_POSSIBLE_SCORE=0
		;
	int testScore;
	char grade;
	bool goodScore = true;


	cout << "Enter Your numeric Test Score and I Will " << std::endl;
	cout << "Tell you the Letter Grade you earned " << std::endl;

	cin >> testScore;

	if (testScore >= MIN_A_SCORE)
		grade = 'A';
	else if (testScore >= MIN_B_SCORE)
		grade = 'B';
	else if (testScore >= MIN_C_SCORE)
		grade = 'C';
	else if (testScore >= MIN_D_SCORE)
		grade = 'D';
	else if (testScore >= 0)
		grade = 'F';
	else
		goodScore = false;

	if (goodScore)
		cout << "Your Grad is " << grade << ".\n";
	else
		cout << "The score cannot be below zero" << endl;

    return 0;
}

