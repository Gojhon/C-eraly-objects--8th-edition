// P1304.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>

int main(int argc,char *argv[])
{
	double total = 0;
	if (argc > 1)
	{
		for (int count = 1; count < argc; count++)
			total += atof(argv[count]);
		std::cout << total << std::endl;
	}
    return 0;
}

