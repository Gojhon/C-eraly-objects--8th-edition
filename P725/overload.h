#pragma once
#include<iostream>
class NumberArray
{
private:
	double *aPtr; //double �� ������ aPtr�� ����
	int arraySize; //int�� arraysize�� ����
public:
	void operator=(const NumberArray &right);//�Լ� �����ε� =NumberArray��ü�� �ð��
	NumberArray(const NumberArray&); //������ ��ü�� �Ű������� �޴´�.
	NumberArray(int size, double value); //������  �Ű����� 2���� �޴´�.
	~NumberArray(){
		//�Ҹ���
		if (arraySize > 0)
			delete [] aPtr;
	}
	void print()const; //����Լ�
	void setValue(double value); 

};
