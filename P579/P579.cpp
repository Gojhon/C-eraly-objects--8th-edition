// P579.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

bool testPIN(const int set1[], const int set2[], int size);

int main()
{
	const int NUM_DIGITS = 4;
	int pin1[NUM_DIGITS] = { 2,4,1,8 };
	int pin2[NUM_DIGITS] = { 2,4,6,8 };
	int pin3[NUM_DIGITS] = { 1,2,3,4 };

	if (testPIN(pin1, pin2, NUM_DIGITS))
		std::cout << "ERROR : pin1 and pin3 are reported to be the same." << std::endl;
	else
		std::cout << "Success : pin1 and pin2 are correctly identified "
		<< "as different" << std::endl;

	if (testPIN(pin1, pin3, NUM_DIGITS))
		std::cout << "Success: pin1, pin3 are Correctlyreported"
		<< "to be the same" << std::endl;
	else
		std::cout << "Success : pin1 and pin3 are correctlyr reported "
		<< "to be the same." << std::endl;
	
	if (testPIN(pin1, pin1, NUM_DIGITS))
		std::cout << "Success: pin1 and pin1 are correctly reported "
		<< "as different" << std::endl;
	
		return 0;
}

bool testPIN(const int custPin[], const int databasePIN[], int size)
{
	for (int index = 0; index < size; index++)
	{
		if (custPin[index] != databasePIN[index])
			return false;
	}
	return true;
}
