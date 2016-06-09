// P1051.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"NumberList2.h"

int main()
{
	NumberList2 list;
	double number;
	list.add(23);
	list.add(17);
	list.add(59);
	std::cout << "The members of the list are : ";
	list.displayList();
	std::cout <<std::endl;
	std::cout << "Enter a number to add : ";
	std::cin >> number;
	list.add(number);
	std::cout << "The members of the list are  : ";
	list.displayList();
	std::cout << std::endl;
	std::cout << "Enter a number to remove : ";
	std::cin >> number;
	list.remove(number);
	std::cout << "The memers of the list are : ";
	list.displayList();
	std::cout << std::endl;


    return 0;
}

