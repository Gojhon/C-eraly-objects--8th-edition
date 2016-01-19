// P292.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <fstream> //������ �а� ���� ���ؼ� fstream 
#include <string>

int main()
{
	std::ofstream outputFile;
	// ���Ϸκ��� �о���̰ų� ���� ���� ���Ǵ� Ư���� ��ü�� ofstream��ü�� �Ѵ�.
	// ofstream ��ü�� iostream ��ü�κ��� �Ļ��Ǿ���.
	
	outputFile.open("Friends.txt"); //Friends.txt ������ ��� ���ų� ������ ������ �����Ѵ�.
	//outputFile.open("Friends.txt", std::ios_base::app);  //Friends.txt ������ ��� ������ �߰��Ѵ�.
	
	std::string name1, name2, name3; //���ڿ� ���� �� �ִ� ���� ����
	std::cout << "Enter the names of three Friends" << std::endl;
	std::cout << "Friend #1 ";
	std::cin >> name1;  //String ���� name1�� ���ڿ� �����Ѵ�.
	std::cout << "Friend #2 ";
	std::cin >> name2;  //String ���� name2�� ���ڿ� �����Ѵ�.
	std::cout << "Friend #3 ";
	std::cin >> name3;  //String ���� name3�� ���ڿ� �����Ѵ�.

	outputFile << name1 << std::endl; // �ؽ�Ʈ ���Ͽ� name1�� �ִ� ������ �Է��� �� ����(Enter)�Ѵ�.
	outputFile << name2 << std::endl; // �ؽ�Ʈ ���Ͽ� name2�� �ִ� ������ �Է��� �� ����(Enter)�Ѵ�.
	outputFile << name3 << std::endl; // �ؽ�Ʈ ���Ͽ� name3�� �ִ� ������ �Է��� �� ����(Enter)�Ѵ�.

	outputFile.close(); //���� ��Ʈ���� �ݴ´�
	//���α׷��� �� �ִ� ���� ������ lock�Ǳ� ������ ������ ������� �Ѵٵ簡, 
	//�ٸ� ����� ������ �� �� �� �ֽ��ϴ�. �� ������ close�սô�.
	std::cout << "The names were saved to a file " << std::endl;

    return 0;
}

