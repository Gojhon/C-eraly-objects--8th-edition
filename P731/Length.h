#pragma once
#include<iostream>

class Length 
{
private:
	int len_inches; //int�� ���� ����
public:
	Length(int feet, int inches) //�Ű� ���� 2���� �޴� ������ 
	{
		setLength(feet, inches);
	}
	Length(int inches) { len_inches = inches;}//�Ű� ���� 1���� �޴� ������
	int getFeet()const {
		return len_inches / 12;
	}
	int getInches()const {
		return len_inches % 12;
	}

	void setLength(int feet, int inches)
	{
		len_inches = 12 * feet + inches;
	}
	friend Length operator+(Length a, Length b);
	friend Length operator-(Length a, Length b);
	friend bool operator<(Length a, Length b);
	friend bool operator==(Length a, Length b);

};