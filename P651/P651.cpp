// P651.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int SIZE = 8;
	int set[] = { 5,10,15,20,25,30,35,40 };
	//int 형 배열 set을 생성하고 8개의 값을 넣는다.
	int *numprt = set;
	//int형 포인트 number에 배열 set을 넣는다.

	std::cout << "The numbers in set are:" << std::endl;
	std::cout << *numprt << " ";
	//포인터 numprt의 첫번째 값을 출력한다.
	while (numprt < &set[SIZE - 1])
	{
		numprt++;
		std::cout << *numprt << " ";
		//while문으로 포인터 numpt을 출력한다.
	}

	std::cout << std::endl << "The numbers in set backwards are" << std::endl;
	std::cout << *numprt << " ";
	
	while (numprt > set)
	{
		numprt--;      
		//numptr의 배열의 값을 하나씩 줄어나간다.
		std::cout << *numprt<<" ";
		//numptr이 set보다 큰경우 numprt의값을 출력한다.
	}
    return 0;
}

