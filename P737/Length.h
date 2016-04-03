#pragma once
#include<iostream>

class Length 
{
private:
	int len_inches; //int �� len_inches  ������ �����Ѵ�.
public:
	Length(int feet, int inches) //�Ű�����2���� �޴� ������
	{
		setLength(feet, inches);
	}
	Length(int inches)  //�Ű����� 1���� �޴� ������
	{
		len_inches = inches;
	}
	int getFeet()const  //Feet���� ������ִ� �Լ�
	{
		return len_inches / 12;
	}
	int getInches() const //Inches ���� ������ִ� �Լ�
	{
		return len_inches % 12;
	}
	void setLength(int feet, int inches) 
	{	//len_inches �Լ��� ����
		len_inches = 12 * feet + inches;
	}

	friend Length operator+(Length a, Length b);
	friend Length operator-(Length a, Length b);
	friend bool operator<(Length a, Length b);
	friend bool operator==(Length a, Length b);
    Length operator++();
	Length operator++(int);
	friend std::ostream &operator<<(std::ostream &out, Length a);
	friend std::istream &operator>>(std::istream &in, Length &a);

};