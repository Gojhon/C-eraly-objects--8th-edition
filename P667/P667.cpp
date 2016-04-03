#include<iostream>
#include<cstdlib>
#include<ctime>

int *getRandomNumbers(int); //int�� �����͸� ��ȯ�ϴ� �Լ�

int main()
{
	int *numbers; //int�� ���� ������ numbers�� �����Ѵ�.
	
	numbers = getRandomNumbers(5); //getRandomNumbers�� ȣ���ϰ� ���ϵ� ���� numbers�� �Ҵ��Ѵ�. 
	
	for (int count = 0; count < 5; count++)
	{//numbers ��ü�� �ִ� ���� ����Ѵ�.
		std::cout << numbers[count] << std::endl;
	}

	delete[]numbers;// numbers��ü�� �Ҹ��Ѵ�.
	numbers = 0; //numbers�� 0���� �ʱ�ȭ�Ѵ�.
	return 0;
}

int *getRandomNumbers(int size)
{
	int *array; //int�� ���� ������ array�� �����Ѵ�.
	
	if (size <= 0) //�Ƕ����(����)���� size�� 0���� ���� ��� NULL�� �����Ѵ�.
		return NULL;

	array = new int[size];//int�� ��ü�� size�� ������ŭ �����Ѵ�.
	srand(time(0)); //������ �� ���� ���� �����Ѵ�.

	for (int count = 0; count < size; count++)
	array[count] = rand(); //���� ���� array�� size�� ��ŭ �Ҵ��Ѵ�. 

	return  array; //array�� �����Ѵ�.
}