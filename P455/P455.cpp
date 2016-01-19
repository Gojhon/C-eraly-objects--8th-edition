// P455.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<string>

struct PayRoll // ����ü PayRoll
{
	int empNumber;
	std::string name;
	double houre, payRate;
	double Pay(); //���� ����_ ���� : ����ü���� �Լ��� ���� �� �ִ�.
};

double PayRoll::Pay() //����ü PayRoll�� �Լ��� ������ �� �ִ�.
{
	return houre*payRate;  //houre������ payRate�� ���� �� double������ �����Ѵ�.
}
int main()
{
	PayRoll employee;
	double grossPay;

	std::cout << "Enter the employee's number : ";
	std::cin >> employee.empNumber;  //����ü employee�� �ִ� int�� empNumber�� ���ڸ� �Է��Ѵ�.

	std::cout << "Enter the employee's name : ";
	std::cin.ignore();//�Է¹����� �ʱ�ȭ 
	getline(std::cin, employee.name); //����ü employee�� �ִ� ���ڿ� name�� ���ڿ��� �����Ѵ�.
	//�ʿ���� ���� (string) �ʿ�. getline�� ������� ���Խ��� �Է��� �� �ֽ��ϴ�.  
	std::cout << "Hours worked this Week: ";
	std::cin >> employee.houre; //����ü employee�� �ִ� double���� houre�� �Ǽ� ���� �Է¹޴´�.

	std::cout << "Employee's Hourly pay rate: " ;
	std::cin >> employee.payRate;//����ü employee�� �ִ� double���� payRate�� �Ǽ� ���� �Է¹޴´�.

	grossPay = employee.Pay(); //employee�� Pay�Լ��� ȣ���Ͽ� ���ϰ��� double�� grossPay�� �����Ѵ�

	std::cout << std::endl << "Here is the employee's payroll data: " << std::endl;
	std::cout << "name:             " << employee.name << std::endl;
	std::cout << "Employee number : " << employee.empNumber << std::endl;
	std::cout << "Hours worked    : " << employee.houre << std::endl;
	std::cout << "Hourly Pay rate : " << employee.payRate << std::endl;
	std::cout << std::fixed <<std::showpoint<<std::setprecision(2)<< std::endl;
	std::cout << "Gross Pay       :$" << grossPay << std::endl;
	//������ ����ϰ� �ִ�.
    return 0;
}

