// P790.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>


int main()
{
	const char *p, *q;
	p = "Hello ";
	q = "Bailey";

	std::cout << p <<q << std::endl;
	
	std::cout << p << " is stored at " << int(p) << std::endl;
	std::cout << q << " is stored at " << int(q) << std::endl;


	std::cout << "String lieral stored at " << int("literal")<<std::endl;

    return 0;
}

