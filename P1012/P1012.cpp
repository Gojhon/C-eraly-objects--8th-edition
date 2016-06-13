// P1012.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<algorithm>
#include<vector>

void doubleValue(int &);

int main()
{
	std::vector<int> numbers;  //int�� vector numbers�� ����
	numbers.reserve(10);

	std::vector<int>::iterator iter; //iterator(�ݺ���) ����
	
	for (int x = 0; x < 10; x++)
	{
		numbers.push_back(x); //numbers�� 0 ~ 9 ������ ���� �ִ´�.
	}

	std::cout << " The numbers in the Vector are : " << std::endl;
	for (auto i : numbers)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	//for�� ���� �Ǹ� ��ĭ�� ���.


	std::for_each(numbers.begin(), numbers.end(), doubleValue);
	//for_each(�����Լ�,�����Լ�,ó���Լ�)
	//numbers���� doubleValue(int &val)�Լ��� ȣ��
	//numbers ���� *2�� �Ѵ�.
	std::cout << "Not the numbers in the vector are : " << std::endl;
	
	for (auto i : numbers)
	{
		std::cout << i << " ";
	}//���� ����Ѵ�.
	std::cout << std::endl;
    return 0;
}

void doubleValue(int &val) //numbers ���� *2�Ѵ�.
{
	val *= 2;

}

