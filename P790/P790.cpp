// P790.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

