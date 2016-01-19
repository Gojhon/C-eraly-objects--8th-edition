// P373.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

void getNums(int&, int&);
void orderNums(int&, int&);

int main()
{
	int small, big;

	getNums(small, big);
	orderNums(small, big);

	std::cout << "The two Input numbers ordered smallest to biggest are " << small << " and " << big << std::endl;
    return 0;
}

void getNums(int&input1, int&input2)
{
	std::cout << "enter an integer: ";
	std::cin >> input1;
	std::cout << "Enter a second integer: ";
	std::cin>>input2;
}
void orderNums(int&num1, int&num2)
{
	int temp;
	if (num1 > num2)
	{
		temp = std::move(num1);
		num1 = std::move(num2);
		num2 = std::move(temp);
	}
}
