// P64.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

