// P371.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

void getNum(int &);
int doubleNum(int);

int main()
{
	int value; //���� value �� ���� 

	getNum(value); //getNum �Լ��� value�� �����Ѵ�.
	//getNum���� �ּҰ����� ���ڸ� �޾ұ� ������ Main�Լ����� value���� �����
	value = doubleNum(value);
	//doubleNum�� ���ϵ� ���� value�� ���Խ�Ų��.
	std::cout << "That value doubled is " << value << std::endl;

    return 0;
}

void getNum(int &usernum) //getNum�Լ��� value�� �ּҸ����� �޴´� 
{
	std::cout << "Enter a number: ";
	std::cin >> usernum; //value�� ���� �ִ´�. 
}

int doubleNum(int number) //doubleNum �Լ���value �� int number�� �޴´�.
{
	return number * 2; //int number�� ���ϱ� 2�� �ϰ� ���� ���� �Լ��� ���(����)�Ѵ�.
}