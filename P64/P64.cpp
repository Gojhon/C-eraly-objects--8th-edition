// P64.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int totalSeconds = 125, minute,seconds;
	minute = totalSeconds/60;

	seconds = totalSeconds % 60;
	std::cout << totalSeconds << " seconds is equivalent to ";
	std::cout << minute <<" minutes and "<<seconds<<" seconds."<< std::endl;

    return 0;
}

