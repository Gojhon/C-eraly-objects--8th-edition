// P747.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include"Length2.h"
int main()
{
 
	Length distance(0); //Length Ŭ������ ��ü�� ����
	double feet; //double�� ���� feet�� ����
	int inches; // int �� ���� inches�� ����
	distance.setLength(4, 6); //���̸� ����Ѵ�.
	
	std::cout << "The Length object is " << distance << " . " << std::endl;
	//<<Length �Լ� �����ε�����  ostream &operator<<(std::ostream& out, Length a) �Լ�ȣ�� 
	std::cout << distance;
	feet = distance;
	//Length::operator double()const ȣ��
	inches = distance;
	//operator int()const { return len_inches; }�Լ� ȣ��
	
	// ������� ���
	std::cout << "The Length object measures " << feet << " feet. " << std::endl;
	std::cout << "THe Length object measures " << inches << " inches."
		<< std::endl;

	return 0;
}

