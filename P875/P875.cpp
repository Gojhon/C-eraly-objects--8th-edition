// P875.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<cctype>

int main()
{
	long offset;
	char ch;
	char response;

	std::fstream file("letters.txt", std::ios::in);
	//letters.txt ���� �б� ���� ����.
	if (!file)
	{//������ ������� Error oepning file �� ����ϰ� �����Ѵ�.
		std::cout << "Error oepning file.";
		return 0;
	}
	do
	{
		std::cout << "Currently at position "
			<< file.tellg() << std::endl;//tellg�Լ��� ������ ��ġ�� ��ȯ�մϴ�.
		std::cout << "Enter an offset from the" <<
			"beginning of the file: ";
		std::cin >> offset; //���ڸ� �Է� �޴´�.
		file.seekg(offset, std::ios::beg); //�Է¹��� ���ں��� ��Ʈ���� �����Ѵ�.
		file.get(ch);
		std::cout << "Character read:" << ch << std::endl;//���ڸ� ����Ѵ�.
		std::cout << "Do it again? ";
		std::cin >> response; //
	} while (toupper(response) == 'Y'); //y�� �Է��ϸ� ��� while�� 
	//toupper�Լ��� �ҹ��ڸ� �빮�ڷ� ��ȯ�Ѵ�.
	file.close();
    return 0;
}

