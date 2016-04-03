#include<iostream>
#include"thisExample.h"

void Example::setValue(int a)
{
	x = a;
}
void Example::printAddrssAndValue()
{
	std::cout << "The object at address " << this << " has " << "value " << (*this).x << std::endl;
}

