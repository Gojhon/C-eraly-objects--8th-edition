// P1051.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include"NumberList2.h"

int main()
{
	NumberList2 list;  //NumberList2 ��ü list�� ����
	double number; //double�� ����  number�� ����
	list.add(23); //list ��ü�� 23�� �߰�
	list.add(17); //list ��ü�� 17�� �߰�
	list.add(59); //list ��ü�� 59�� �߰�
	std::cout << "The members of the list are : ";
	list.displayList();// �Էµ� ���� ����Ѵ�.
	std::cout <<std::endl;
	std::cout << "Enter a number to add : "; // �߰��ϰ� ���� ���� �Է����ּ���.
	std::cin >> number; // number�� ���� �Ҵ� 
	list.add(number); //list��ü�� �Էµ� ���� �߰��Ѵ�.
	std::cout << "The members of the list are  : ";
	list.displayList(); // list�� �ִ� ������ ����Ѵ�.
	std::cout << std::endl;
	std::cout << "Enter a number to remove : "; //�����ϰ� ���� ���� �Է��Ѵ�.
	std::cin >> number; //�����ϰ� ���� ���� number�� �Ҵ��Ѵ�.
	list.remove(number);//list��ü�� number���� �����Ѵ�.
	std::cout << "The memers of the list are : ";
	list.displayList();// list�� �ִ� ���� ����Ѵ�.
	std::cout << std::endl;


    return 0;
}

