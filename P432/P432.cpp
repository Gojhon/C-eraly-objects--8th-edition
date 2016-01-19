// P432.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>

class SimpleStat
{
private:
	int largest;
	int sum;
	int count;

	bool isNewLargest(int);

public :
	SimpleStat();
	bool addNumber(int);
	double getAverage();

	int getLargest();
	int getCount();

};
SimpleStat::SimpleStat():largest(0),sum(0),count(0)
{
}

int SimpleStat::getLargest()
{
	return largest;
}

int SimpleStat::getCount()
{
	return count;
}

bool SimpleStat::addNumber(int num)
{
	bool goodNum = true;
	if (num >= 0) //�Էµ� ���� 0�̻��� ���
	{
		sum += num; // �Էµ� ���� sum ������ ���� ���Ѵ�
		count++; //if��Ʈ�� Ÿ�� count ������ ���� �ö󰣴�.
		if (isNewLargest(num)) //if �ȿ� isNewLargest(num)(�� ��) �Լ��� ȣ�� ���� ��� ������ ���
			 largest = num;//���� ��� largest ������ ���� �����Ѵ�.
	}
	else
	{
		goodNum = false;
	}
	return goodNum; //�������� �����Ѵ�.
}


bool SimpleStat::isNewLargest(int num)
{
	if (num > largest) // �Էµ� ���ڰ� �� �����ں��� ū ��� 
		return true;  // ���� ���
	else
		return false; //�ƴ� ��� ���� ���
}
double SimpleStat::getAverage()
{
	if (count > 0) // �Էµ� ���ڰ� �Ѱ� �̻��� ���
		return static_cast<double>(sum) / count; //�Է� �� ������ ���� �Է� �� ������ ������ ������.
	else
		return 0;
}
int main()
{
	int num;
	SimpleStat statHelper;

	std::cout << "Please enter the set of non-negative interger" << std::endl;
	std::cout << "Values you Want to average. Separate them with" << std::endl;
	std::cout << "Spaces and enter -1 after the last Value" << std::endl;
	// �������� ���ڸ� �Է��ϰ� -1 ���� �Է½� ���α׷��� �����Ѵ�.
	std::cin >> num;  // �����Է� 
	while (num >= 0)  //�Է� �� ���ڰ� 0���� ���ų� ū ������ ���
	{
		statHelper.addNumber(num); //statHelperŬ������ addNumber�� ȣ���Ѵ�.
		std::cin >> num;
	}
	std::cout << std::endl << "You entered" << statHelper.getCount() << " values" << std::endl;
	std::cout << "The largest values was " << statHelper.getLargest() << std::endl;
	std::cout << "The average values was " << statHelper.getAverage() << std::endl;


    return 0;
}

