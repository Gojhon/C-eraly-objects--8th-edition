// P1040.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<string>
#include"LinkedList.h"

int main()
{
	LinkedList<std::string> list;

	list.add("Alice");
	list.add("Chuck");
	list.add("Elaine");
	list.add("fran");
	
	std::cout << "Here are the initial names : " << std::endl;
	list.displayList();
	std::cout << std::endl << std::endl;

	std::cout << "Now removing Elaine " <<std::endl<<std::endl;
	list.remove("Elaine");
	std::cout << "Here are the remaining elements." << std::endl;
	list.displayList();
	std::cout << std::endl;

    return 0;
}

