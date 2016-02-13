// P547.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<iomanip>

int main()
{
	const int NUM_DIVS = 3; //int�� ��� NUM_DIVS�� 3�� �Է��Ѵ�.(��,���� ������ �ȴ´�/�����ȴ�)
	const int NUM_QTRS = 4; //int�� ��� NUM_QTRS�� 4�� �Է��Ѵ�.(��,���� ������ �ȴ´�/�����ȴ�)

	double sales[NUM_DIVS][NUM_QTRS]; // double���� 2���� �迭�� �����Ѵ� 3x4
	double totalSales = 0;
	int div, qtr;
	
	std::ifstream datafile; //����������� �� �� �ִ� datafile������ �����Ѵ�.

	datafile.open("sales2.dat");  //���� �������� sales2.dat�� �˻��Ѵ�.
	if (!datafile)//������ �������
		std::cout << "Error Opening data file" << std::endl; 
	else //������ �������
	{
		std::cout << std::fixed << std::showpoint << std::setprecision(2);
		std::cout << "Quarterly Sales by Division" << std::endl;
	
		for (div = 0; div < NUM_DIVS; div++)
		{
			for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
				std::cout << "Division " << (div + 1) << ", Quarter" << (qtr + 1) << ": $";
				//2���� �迭�� ������ ����Ѵ�.Division���� Quarter�� ���� ���� ����Ѵ�.
				datafile >> sales[div][qtr]; //���Ͽ� �ִ� ���� sales�迭�� ���ʴ�� �Է¹޴´�.
				std::cout << sales[div][qtr] << std::endl; //������ �迭�� ���� ����Ѵ�.
			}
			std::cout << std::endl;
		}
		datafile.close();
		for (div = 0; div < NUM_DIVS; div++)
		{
			for (qtr = 0; qtr < NUM_QTRS; qtr++)
			{
				totalSales += sales[div][qtr]; //���� �迭�� ���� ���Ѵ�.
			}
		}
		std::cout << "The Total sales for the company are : $";
		std::cout << totalSales << std::endl; //sales2.dat�ִ� ���� �հ踦 ����Ѵ�.
	}
	return 0;
} 

