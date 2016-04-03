#pragma once

#include<iostream>

class Length
{
private :
	int len_inches; //길이
public:
	Length(int feet, int inches) 
	{ //매개 변수 2개를 받는 생성자
		setLength(feet, inches);
	}
	Length(int inches) 
	{ //매개 변수 1개를 받는 생성자
		len_inches = inches;
	}
	int getFeet()const 
	{ //Feet를 얻을 수 있는 상수형 함수
		return len_inches / 12;
	}
	int getInches()const 
	{ //Inches를 얻을 수 있는 상수형 함수
		return len_inches % 12;
	}
	void setLength(int feet, int inches)
	{
		len_inches = 12 * feet + inches;
	}
	operator double()const;
	operator int()const { return len_inches; }
	
	friend std::ostream &operator<<(std::ostream &out, Length);
	//연산자 오버로딩 

};