// P1054.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<list>

int main()
{
	std::list<int> myList;
	std::list<int>::iterator iter;

	for (int x = 0; x < 100; x += 10)
		myList.push_back(x);

	for (iter = myList.begin(); iter != myList.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;

	myList.reverse();

	for (iter = myList.begin(); iter != myList.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;

	return 0;
}

