#pragma once
#include<iostream>
class NumberArray
{
private:
	double *aPtr; //double 형 포인터 aPtr을 생성
	int arraySize; //int형 arraysize를 생성
public:
	void operator=(const NumberArray &right);//함수 오버로딩 =NumberArray객체가 올경우
	NumberArray(const NumberArray&); //생성자 객체를 매개변수로 받는다.
	NumberArray(int size, double value); //생성자  매개변수 2개를 받는다.
	~NumberArray(){
		//소멸자
		if (arraySize > 0)
			delete [] aPtr;
	}
	void print()const; //출력함수
	void setValue(double value); 

};
