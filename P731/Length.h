#pragma once
#include<iostream>

class Length 
{
private:
	int len_inches; //int형 변수 생성
public:
	Length(int feet, int inches) //매개 변수 2개를 받는 생성자 
	{
		setLength(feet, inches);
	}
	Length(int inches) { len_inches = inches;}//매개 변수 1개를 받는 생성자
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