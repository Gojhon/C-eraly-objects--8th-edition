// P455.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<string>

struct PayRoll // 구조체 PayRoll
{
	int empNumber;
	std::string name;
	double houre, payRate;
	double Pay(); //예제 변경_ 목적 : 구조체에도 함수가 만들 수 있다.
};

double PayRoll::Pay() //구조체 PayRoll에 함수를 생성할 수 있다.
{
	return houre*payRate;  //houre변수와 payRate를 곱한 후 double형으로 리턴한다.
}
int main()
{
	PayRoll employee;
	double grossPay;

	std::cout << "Enter the employee's number : ";
	std::cin >> employee.empNumber;  //구조체 employee에 있는 int형 empNumber에 숫자를 입력한다.

	std::cout << "Enter the employee's name : ";
	std::cin.ignore();//입력버퍼의 초기화 
	getline(std::cin, employee.name); //구조체 employee에 있는 문자열 name에 문자열을 대입한다.
	//필요헤더 파일 (string) 필요. getline은 공백까지 포함시켜 입력할 수 있습니다.  
	std::cout << "Hours worked this Week: ";
	std::cin >> employee.houre; //구조체 employee에 있는 double형에 houre에 실수 값을 입력받는다.

	std::cout << "Employee's Hourly pay rate: " ;
	std::cin >> employee.payRate;//구조체 employee에 있는 double형에 payRate에 실수 값을 입력받는다.

	grossPay = employee.Pay(); //employee에 Pay함수를 호출하여 리턴값은 double형 grossPay에 대입한다

	std::cout << std::endl << "Here is the employee's payroll data: " << std::endl;
	std::cout << "name:             " << employee.name << std::endl;
	std::cout << "Employee number : " << employee.empNumber << std::endl;
	std::cout << "Hours worked    : " << employee.houre << std::endl;
	std::cout << "Hourly Pay rate : " << employee.payRate << std::endl;
	std::cout << std::fixed <<std::showpoint<<std::setprecision(2)<< std::endl;
	std::cout << "Gross Pay       :$" << grossPay << std::endl;
	//값들을 출력하고 있다.
    return 0;
}

