#include"auxil.h"
#include"budget3.h"

void Aux::addBudget(double b)
{
	auxBudget += b; //�������� �߰�
	Budget::corpBudget += auxBudget; //���� �繫���� ������ �߰��� ��ü���� �߰�
}