#pragma once
#include "auxil.h"
class Budget
{//예산 클래스를 생성
private:
	static double corpBudget; //static double형 corpBudget변수 생성(전체예산)
	double divBudget; // double형 divBudget 생성(부서예산)
public:
	Budget() { divBudget = 0; }//생성자
	void addBudget(double b)
	{//입력된 값을 부서 예산 및 전체 예산에 더하는 함수
		divBudget += b; 
		corpBudget += divBudget;
	}
	double getDivBudget()const { return divBudget; }
	static double getCorpBudget() { return corpBudget; }
	static void mainoffice(double);
	friend void Aux::addBudget(double); //Aux::addBudget에 friend 예약어를 추가함으로써 
							            //Aux::addBudget는 Budget클래스에 접근할 수 있다.
};