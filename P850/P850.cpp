// P850.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include<fstream>

int main()
{
	std::fstream nameFIle; //fstream Ŭ���� nameFIle�� ����
	std::string input; //string Ŭ���� input�� ����

	nameFIle.open("mruphy.txt", std::ios::in); //mruphy.txt �б� ���� ����.  
	if (!nameFIle) //������ ���� ���
	{ //���� ���� ������ ����ϰ� �����Ѵ�.
		std::cout << "FIle open error!" << std::endl;
		return 0;
	}
	//������ ���� ��� 
	std::getline(nameFIle, input);
	while(nameFIle)
	{
		std::cout << input << std::endl; //���ڿ��� ����Ѵ�.
		std::getline(nameFIle, input); //���Ͽ� �ִ� ���ڿ��� input ��ü�� ��´�.
	}
	nameFIle.close(); //������ �ݴ´�.

    return 0;
}

