#include"budget3.h"

double Budget::corpBudget = 0;

void Budget::mainoffice(double budReq)
{
	corpBudget += budReq; //주사무실 예산 추가
}