#pragma once
#include "auxil.h"
class Budget
{//���� Ŭ������ ����
private:
	static double corpBudget; //static double�� corpBudget���� ����(��ü����)
	double divBudget; // double�� divBudget ����(�μ�����)
public:
	Budget() { divBudget = 0; }//������
	void addBudget(double b)
	{//�Էµ� ���� �μ� ���� �� ��ü ���꿡 ���ϴ� �Լ�
		divBudget += b; 
		corpBudget += divBudget;
	}
	double getDivBudget()const { return divBudget; }
	static double getCorpBudget() { return corpBudget; }
	static void mainoffice(double);
	friend void Aux::addBudget(double); //Aux::addBudget�� friend ���� �߰������ν� 
							            //Aux::addBudget�� BudgetŬ������ ������ �� �ִ�.
};