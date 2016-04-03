#pragma once
#include<iostream>

class Length 
{
private:
	int len_inches; //int 형 len_inches  변수를 생성한다.
public:
	Length(int feet, int inches) //매개변수2개를 받는 생성자
	{
		setLength(feet, inches);
	}
	Length(int inches)  //매개변수 1개를 받는 생성자
	{
		len_inches = inches;
	}
	int getFeet()const  //Feet값은 출력해주는 함수
	{
		return len_inches / 12;
	}
	int getInches() const //Inches 값을 출력해주는 함수
	{
		return len_inches % 12;
	}
	void setLength(int feet, int inches) 
	{	//len_inches 함수를 구함
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