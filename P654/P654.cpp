// P654.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
void getNumber(int *);
void doubleValue(int *);


int main()
{
	int number; //int �� ���� number�� �����Ѵ�.
	getNumber(&number); //getnumber �Լ��� ȣ���ϰ� number�� �ּҰ��� �ѱ��.
	doubleValue(&number);//doubleValue �Լ��� ȣ���ϰ� number�� �ּҰ��� �ѱ��.
	std::cout << "That value doubled is " << number << std::endl;
	//���ο��� number�� ���� ȣ���Ѵ�.
    return 0;
}

void getNumber(int *input)
{
	//int �� ���� ������ input�� �����ϰ� number�� �ּҰ��� �޴´�.
	std::cout << "Enter an integer number: ";
	std::cin >> *input;
	//int�� ������ input�� ���� �Է��Ѵ�.
}

void doubleValue(int *val)
{
	//number�� �ּҰ��� int�� ������ val�� �ּҰ��� �ް�
	//val ���� ���ϱ� 2�� �Ѵ�.
	*val *= 2;
}