// P790.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>


int main()
{
	const char *p, *q;
	const void*rp =&p;
	p = "Hello ";
	q = "Bailey";

	std::cout << &p <<"  "<<&q << std::endl;
	
	std::cout << p << " is stored at " << static_cast<const void*>(p) << std::endl;
	std::cout << q << " is stored at " << static_cast<const void*>(q) << std::endl;


	std::cout << "String lieral stored at " << int("literal")<<std::endl;

    return 0;
}

