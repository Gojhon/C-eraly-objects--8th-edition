// P697.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include "thisExample.h"
#include <iostream>

int main()
{
	Example ob1(10), ob2(20);

	std::cout << "Addressees of objects are " << &ob1 << " and  " << &ob2 << std::endl;

	ob1.printAddrssAndValue();
	ob2.printAddrssAndValue();

    return 0;
}

