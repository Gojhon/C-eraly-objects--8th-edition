// P793.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int NAME_LENGTH = 50;
	//����� int  NAME_LENGTH�� 50�� �Ҵ��Ѵ�.
	char *pname;
	//�����͸� �����Ѵ�.
	pname = new char[NAME_LENGTH];// pname�� char������ 50���� �Ҵ��Ѵ�.
	std::cout << "Enter your name:";
	std::cin.getline(pname, NAME_LENGTH); 
	//bufferSize NAME_LENGTH��ŭ Ű���忡 �Է¹ް� pname���Ҵ��Ѵ�.
	std::cout << "Hello " << pname;
	//Hello pname���
    return 0;
}

