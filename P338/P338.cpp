// P338.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

void showSum(int num1, int num2, int num3);
void showargs(...)
{

}
int main()
{
	int valuel1, valuel2, valuel3;

	std::cout << "Enter three integers and I will display";
	std::cout << "their sum: ";
	std::cin >> valuel1 >> valuel2 >> valuel3;

	showSum(valuel1, valuel2, valuel3);
    return 0;
}


void showSum(int num1, int num2, int num3)
{
	std::cout << "The sum is " << (num1 + num2 + num3) << std::endl;
}