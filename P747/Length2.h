#pragma once

#include<iostream>

class Length
{
private :
	int len_inches; //����
public:
	Length(int feet, int inches) 
	{ //�Ű� ���� 2���� �޴� ������
		setLength(feet, inches);
	}
	Length(int inches) 
	{ //�Ű� ���� 1���� �޴� ������
		len_inches = inches;
	}
	int getFeet()const 
	{ //Feet�� ���� �� �ִ� ����� �Լ�
		return len_inches / 12;
	}
	int getInches()const 
	{ //Inches�� ���� �� �ִ� ����� �Լ�
		return len_inches % 12;
	}
	void setLength(int feet, int inches)
	{
		len_inches = 12 * feet + inches;
	}
	operator double()const;
	operator int()const { return len_inches; }
	
	friend std::ostream &operator<<(std::ostream &out, Length);
	//������ �����ε� 

};