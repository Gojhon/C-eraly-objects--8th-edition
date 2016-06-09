// P1037.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"NumberList.h"

int main()
{
	NumberList list;
	
	list.add(2.5);
	list.add(7.9);
	list.add(12.6);

	std::cout << "Here are the initial values:" << std::endl;
	list.displayList();
	std::cout << std::endl << std::endl;

	std::cout << "Now removing the value in the middle " << std::endl;
	list.remove(7.9);
	std::cout << "Here are the values left" << std::endl;
	list.displayList();
	std::cout << std::endl << std::endl;

	std::cout << "Now removing the last value" << std::endl;
	list.remove(12.6);
	std::cout << "Here are the values left " << std::endl;
	list.displayList();
	std::cout << std::endl << std::endl;

	std::cout << "Now removing the only reamaing value" << std::endl;
	list.remove(2.5);
	std::cout << "Here are the values left " << std::endl;
	list.displayList();
	std::cout << std::endl;

    return 0;
}

