#include"auxil.h"
#include"budget3.h"

void Aux::addBudget(double b)
{
	auxBudget += b; //보조예산 추가
	Budget::corpBudget += auxBudget; //보조 사무실의 예산을 추가시 전체예산 추가
}