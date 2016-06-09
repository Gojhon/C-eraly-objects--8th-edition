// P1034.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include"SortedNumberList.h"

int main()
{
	SortedNumberList list;
	list.add(2.5);
	list.add(7.9);
	list.add(12.6);
	list.add(10.5);
	list.displayList();
	std::cout << std::endl;

    return 0;
}

