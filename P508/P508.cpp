// P508.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include "stdafx.h"
#include<iostream>

int main()
{
	const int NUM_EMPLOYEES = 6; 
	int hours[NUM_EMPLOYEES]; //정수형 데이터 6개를 저장할 수 있는 배열을 선언한다.
	int count;

	std::cout << "Enter the hours worked by " << NUM_EMPLOYEES
		<< " employees : ";
	for (count = 0; count < NUM_EMPLOYEES; count++)
	{
		std::cin >> hours[count]; //hours[count] 배열에 있는 정수형데이터에 값을 넣는다.
	}
	std::cout << "THe hours you entered are: ";
	for (count = 0; count < NUM_EMPLOYEES; count++)
	{
		std::cout << " " << hours[count]; //hours[count] 배열에 있는 값을 출력합니다.
	}
	std::cout << std::endl;
	return 0;
}

