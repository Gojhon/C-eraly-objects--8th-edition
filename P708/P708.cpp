// P708.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include<iostream>
#include"budget3.h"
#include<iomanip>

int main()
{
	const int N_DIVISIONS = 4;//상수형 int 변수 N_divisions을 생성

	std::cout << "Enter the main office's budget request: "; //예산 요청을 입력
	double amount; //double 형 amount 생성 
	std::cin >> amount; //금액을 입력 
	Budget::mainoffice(amount); //메인 오피스의 예산을 더한다.
	Budget divisions[N_DIVISIONS];//Budget 클래스의 객체 4개를 생성한다.
	Aux auxoffices[N_DIVISIONS]; // Aux 클래스의 객체 4개를 생성한다.

	std::cout << std::endl << "Enter the budget requests for the diisions and "
		<< std::endl << "their auxilary offices as prompted: " << std::endl;

	for (int count = 0; count < N_DIVISIONS; count++)
	{
		double bud;
		std::cout << "Division " << (count + 1) << ": "; 
		std::cin >> bud; //분할을 할 예산을 입력
		divisions[count].addBudget(bud);  //Budget클래스의 분할 된 예산을 입력한다.
		std::cout << "Division " << (count + 1) << "'s auxiliary office: ";
		std::cin >> bud;//보조사무실의 예산을 입력한다.
		auxoffices[count].addBudget(bud);//aux클래스의 예산값을 입력한다.
	}
	std::cout << std::setprecision(2);
	std::cout << std::showpoint << std::fixed;
	for (int count = 0; count < N_DIVISIONS; count++)
	{//출력한다.
		std::cout << "\tDivision: " << (count + 1) << "\t\t\t$";
		std::cout << std::setw(7);
		std::cout << divisions[count].getDivBudget() << std::endl; //총 예산을 출력한다.
		std::cout << "\tAuxiliary Office of Division " << (count + 1);
		std::cout << "\t$";
		std::cout << auxoffices[count].getDivBudget() << std::endl; //보조사무실의 총예산을 출력한다.
	}
	std::cout << "\tTotal Requests (including main office): $";
	std::cout << Budget::getCorpBudget() << std::endl; //토탈 예산을 출력한다.

    return 0;
}

