// P708.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include<iostream>
#include"budget3.h"
#include<iomanip>

int main()
{
	const int N_DIVISIONS = 4;//����� int ���� N_divisions�� ����

	std::cout << "Enter the main office's budget request: "; //���� ��û�� �Է�
	double amount; //double �� amount ���� 
	std::cin >> amount; //�ݾ��� �Է� 
	Budget::mainoffice(amount); //���� ���ǽ��� ������ ���Ѵ�.
	Budget divisions[N_DIVISIONS];//Budget Ŭ������ ��ü 4���� �����Ѵ�.
	Aux auxoffices[N_DIVISIONS]; // Aux Ŭ������ ��ü 4���� �����Ѵ�.

	std::cout << std::endl << "Enter the budget requests for the diisions and "
		<< std::endl << "their auxilary offices as prompted: " << std::endl;

	for (int count = 0; count < N_DIVISIONS; count++)
	{
		double bud;
		std::cout << "Division " << (count + 1) << ": "; 
		std::cin >> bud; //������ �� ������ �Է�
		divisions[count].addBudget(bud);  //BudgetŬ������ ���� �� ������ �Է��Ѵ�.
		std::cout << "Division " << (count + 1) << "'s auxiliary office: ";
		std::cin >> bud;//�����繫���� ������ �Է��Ѵ�.
		auxoffices[count].addBudget(bud);//auxŬ������ ���갪�� �Է��Ѵ�.
	}
	std::cout << std::setprecision(2);
	std::cout << std::showpoint << std::fixed;
	for (int count = 0; count < N_DIVISIONS; count++)
	{//����Ѵ�.
		std::cout << "\tDivision: " << (count + 1) << "\t\t\t$";
		std::cout << std::setw(7);
		std::cout << divisions[count].getDivBudget() << std::endl; //�� ������ ����Ѵ�.
		std::cout << "\tAuxiliary Office of Division " << (count + 1);
		std::cout << "\t$";
		std::cout << auxoffices[count].getDivBudget() << std::endl; //�����繫���� �ѿ����� ����Ѵ�.
	}
	std::cout << "\tTotal Requests (including main office): $";
	std::cout << Budget::getCorpBudget() << std::endl; //��Ż ������ ����Ѵ�.

    return 0;
}

