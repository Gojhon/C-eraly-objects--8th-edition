#pragma once
class Aux
{
private:
	double auxBudget; //���� ��ü�� ����
public:
	Aux() { auxBudget = 0; } //Aux Ŭ������ ������
	void addBudget(double); // Aux ������ ���ϴ� �Լ�
	double getDivBudget()const { return auxBudget; } //����Լ�
};