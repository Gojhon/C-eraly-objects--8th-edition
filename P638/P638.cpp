// P638.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

char letter;//char�� �������� letter�� �����Ѵ�.
short number; //short�� �������� number�� �����Ѵ�.
float amount; //float�� �������� amount�� �����Ѵ�.
double profit; //double�� �������� profit�� �����Ѵ�.
char ch; //char�� �������� ch�� �����Ѵ�.

int main()
{
	std::cout << "Address of letter is : "<< long(&letter) <<std:: endl;
	//char �� letter�� ���ڿ��� long���� ����ȯ �Ͽ� �ּҰ��� ����Ѵ�.
	std::cout << "Address of number is : " << long(&number) << std::endl;
	//short �� letter�� ���ڿ��� long���� ����ȯ �Ͽ� �ּҰ��� ����Ѵ�.
	std::cout << "Address of amount is : "<< long(&amount) << std::endl;
	//float �� letter�� ���ڿ��� long���� ����ȯ �Ͽ� �ּҰ��� ����Ѵ�.
	std::cout << "Address of profit is : "<< long(&profit) << std::endl;
	//double �� letter�� ���ڿ��� long���� ����ȯ �Ͽ� �ּҰ��� ����Ѵ�.
	std::cout << "Address of ch is :" << long(&ch) << std::endl;
	//char �� ch�� ���ڿ��� long���� ����ȯ �Ͽ� �ּҰ��� ����Ѵ�.
	return 0;
}

