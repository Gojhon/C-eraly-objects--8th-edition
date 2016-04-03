// P747.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include"Length2.h"
int main()
{
 
	Length distance(0); //Length 클래스의 객체를 생성
	double feet; //double형 변수 feet를 생성
	int inches; // int 형 변수 inches를 생성
	distance.setLength(4, 6); //길이를 출력한다.
	
	std::cout << "The Length object is " << distance << " . " << std::endl;
	//<<Length 함수 오버로딩으로  ostream &operator<<(std::ostream& out, Length a) 함수호출 
	std::cout << distance;
	feet = distance;
	//Length::operator double()const 호출
	inches = distance;
	//operator int()const { return len_inches; }함수 호출
	
	// 결과값을 출력
	std::cout << "The Length object measures " << feet << " feet. " << std::endl;
	std::cout << "THe Length object measures " << inches << " inches."
		<< std::endl;

	return 0;
}

