// P651.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	const int SIZE = 8;
	int set[] = { 5,10,15,20,25,30,35,40 };
	//int �� �迭 set�� �����ϰ� 8���� ���� �ִ´�.
	int *numprt = set;
	//int�� ����Ʈ number�� �迭 set�� �ִ´�.

	std::cout << "The numbers in set are:" << std::endl;
	std::cout << *numprt << " ";
	//������ numprt�� ù��° ���� ����Ѵ�.
	while (numprt < &set[SIZE - 1])
	{
		numprt++;
		std::cout << *numprt << " ";
		//while������ ������ numpt�� ����Ѵ�.
	}

	std::cout << std::endl << "The numbers in set backwards are" << std::endl;
	std::cout << *numprt << " ";
	
	while (numprt > set)
	{
		numprt--;      
		//numptr�� �迭�� ���� �ϳ��� �پ����.
		std::cout << *numprt<<" ";
		//numptr�� set���� ū��� numprt�ǰ��� ����Ѵ�.
	}
    return 0;
}

