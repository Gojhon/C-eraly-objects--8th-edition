// P725.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include<iomanip>
#include"overload.h"

int main()
{
	NumberArray first(3, 10.5);
	//NumberArray Ŭ������ first��ü�� ����
	NumberArray second(5, 20.5);
	//NumberArray Ŭ������ second��ü�� ����
	std::cout << std::setprecision(2) << std::fixed << std::showpoint;
	std::cout << "Fist object's data is ";
	first.print(); //first�� ���� ����Ѵ�.
	//10.5�� 3�� ����Ѵ�.
	std::cout << std::endl << "Second object's data is ";
	
	second.print();
	//20.5�� 5�� ����Ѵ�.
	std::cout << std::endl << "Now we will assign the second object" <<
		"to the first" << std::endl;
	first = second;
	//void operator=(const NumberArray &right)�Լ� ȣ���Ѵ�.

	std::cout << "First object's data is ";
	first.print();
	//20.5�� 5�� ����Ѵ�.
	std::cout << std::endl << "The second object's data is ";
	second.print();
    //20.5�� 5�� ����Ѵ�.
    return 0;
}

