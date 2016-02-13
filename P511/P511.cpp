// P511.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int SIZE = 3;
	int A[SIZE] = { 1,1,1 };

	int B[SIZE];
	std::cout << "Here are the original numbers in 3-elemnt array A:";
	for (int count = 0; count < 3; count++)
	std::cout << A[count] << "  ";
	

	std::cout << "Here are the original numbers in 3-elemnt array B:";
	for (int count = 0; count < 7; count++)
		B[count] = 5;

	std::cout << std::endl << "If you See this message, the computer did not crash.";
	std::cout << std::endl << std::endl << "Here are the 7 numbers in array B: ";
	for (int count = 0; count < 7; count++)
	{
		std::cout << B[count] << "   ";
	}
	std::cout << std::endl << "Here are the numbers now in array A: ";
	for (int count = 0; count < 3; count++)
	{
		std::cout << A[count] << "   "; 
	}
	std::cout << std::endl << " Here are the Numbers now in array A: ";
	for (int count = 0; count < 3; count++)
	{
		std::cout << A[count] << "  ";
	}
	std::cout << std::endl << std::endl << "Array A's values were overwritten by " << std::endl;
	std::cout << "the Value that did not fit in Array B." << std::endl;

    return 0;
}

