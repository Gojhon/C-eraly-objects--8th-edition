// P380.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
char getChoice();
double calcweeklyPay(int, double);
double calcweeklyPay(double);

int main()
{
	char selection;
	int worked;
	double rate, yearly;

	std::cout << std::fixed << std::showpoint << std::setprecision(2);

	std::cout << "Do you Want to calculate the weekly Pay of " << std::endl;
	std::cout << "(R)an hourly-wage empoly, or" << std::endl;
	std::cout << "(S) a salaried empolyee: ";
	selection = getChoice();

	switch (selection)
	{
	case 'H' :
	case 'h' : std::cout << "How many hours were worked?";
			   std::cin >> worked;
			   std::cout << "What is the hourly pay rate?";
			   std::cin >> rate;
			   std::cout << "The gross weekly pay is $";
			   std::cout << calcweeklyPay(worked, rate) << std::endl;
			   break;
	case 'S':
	case 's': std::cout << "What is the annual salary?";
			  std::cin >> yearly;
			  std::cout << "The gross weekly pay is$?";
			  std::cout << calcweeklyPay(yearly) << std::endl;
	}
	
    return 0;
}


char getChoice()
{
	char letter;
	std::cin >> letter;

	while (letter!='H'&&letter!='h'&&letter!='S'&&letter!='s')
	{
		std::cout << "Enter H or S :";
		std::cin >> letter;
	}
	return letter;
}
double calcweeklyPay(int hours, double payRate)
{
	return hours*payRate;
}
double calcweeklyPay(double annSalary)
{
	return annSalary / 52.0;
}
