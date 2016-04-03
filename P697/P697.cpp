// P697.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

